/* Programmer name = Shelake Kalyani
   Progran name = To evaluate prefix expression.
   Date = 12-01-2022 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define STACKSIZE 100

struct stack
{
	double items[STACKSIZE];
	int top;
};

int empty(struct stack *ps)
{
	if(ps->top==-1)
		return -1;
	else
		return 0;
}

void push(struct stack *ps,double x)
{
	if(ps->top==STACKSIZE-1)
	{
		printf("Stack is full..\n");
		return;
	}
	ps->top++;
	ps->items[ps->top] = x;
}

double pop(struct stack *ps)
{
	double x;
	
	if(ps->top==-1)
	{
		printf("Stack is empty..\n");
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
	
	printf("Enter one prefix string = ");
	scanf("%s",s);
	
	for(i=strlen(s)-1;i>=0;i--)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			push(&opndstk,(double)(s[i]-'0'));
		}
		else
		{
			opnd1 = pop(&opndstk);
			opnd2 = pop(&opndstk);
			
			switch(s[i])
			{
				case '+':
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
