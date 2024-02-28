/* Programmer name = Shelake Kalyani
   Progran name = To evaluate postfix expression.
   Date = 12-01-2022 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
# define STACKSIZE 100
struct stack
{
	double items[STACKSIZE];
	int top;
};

int empty(struct stack *ps)
{
	if(ps->top==-1)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

void push(struct stack *ps,double x)
{
	if(ps->top==STACKSIZE-1)
	{
		printf("Stack is overflow.");
		return;
	}
	ps->top++;
	ps->items[ps->top] = x;
}

double pop(struct stack *ps)
{
	double x;
	if(empty(ps))
	{
		printf("stack is empty...can not pop!!\n");
		exit(0);
	}
	x = ps->items[ps->top];
	ps->top--;
	return x;
}

int main()
{
	char s[80];
	int i;
	struct stack opndstk;
	double opnd1,opnd2,result;
	opndstk.top = -1;
	
	printf("Enter one postfix string = ");
	scanf("%s",s);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			push(&opndstk,(double)(s[i]-'0')); // To convert character value into int
											   // charcter ASCII value - ASCII value of 0 and 
											   // type of array is double hence tpecast "double"
		}
		else
		{
			opnd2 = pop(&opndstk);
			opnd1 = pop(&opndstk);
			
			switch(s[i])
			{
				case '+' :
							result = opnd1+opnd2;
							push(&opndstk,result);
							break;
				case '-' :
							result = opnd1-opnd2;
							push(&opndstk,result);
							break;
				case '*' :
							result = opnd1*opnd2;
							push(&opndstk,result);
							break;
				case '/' :
							result = opnd1/opnd2;
							push(&opndstk,result);
							break;
				case '$' :
							result = pow(opnd1,opnd2);
							push(&opndstk,result);
							break;
				case '^' :
							result = pow(opnd1,opnd2);
							push(&opndstk,result);
							break;
			}
		}
	}
	printf("\n Final result  = %lf\n",result);
}
