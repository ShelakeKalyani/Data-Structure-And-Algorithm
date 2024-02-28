/* Programmer name = Shelake Kalyani
   Progran name = Convert Infix Expression into postfix.
   Date = 12-01-2022 */
   
#include<stdio.h>
#include<stdlib.h>
#define SIZE 50

struct stack 
{
	char items[SIZE];
	int top;
};

int empty(struct stack *ps)
{
	if(ps->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


void push(struct stack *ps,char x)
{
	if(ps->top==SIZE-1)
	{
		printf("Stack is overflow..\n");
		return;
	}
	ps->top++;
	ps->items[ps->top] = x;
}

char pop(struct stack *ps)
{
	char x;
	
	if(empty(ps))
	{
		printf("Stack is empty.\n");
		exit(0);
	}
	x = ps->items[ps->top];
	ps->top--;
	return x;
}

char peek(struct stack *ps)
{
	char x;
	
	if(empty(ps))
	{
		printf("Stack is empty..\n");
		exit(0);
	}
	x = ps->items[ps->top];
	return x;
}



int priority(char op1,char op2)
{
	int flag = 0;
	
	switch(op1)
	{
		case '(' :
					flag = 0;
					break;
		case '$' :
					if(op2=='$' || op2=='^' || op2=='(')
						flag = 0;
					else
					    flag = 1;
					break;
		case '*' :
					if(op2=='$' || op2=='^' || op2=='(')
						flag = 0;
					else
					    flag = 1;
					break;
		case '/' :
					if(op2=='$' || op2=='^' || op2=='(')
						flag = 0;
					else
					    flag = 1;
					break;
		case '^' :
					if(op2=='$' || op2=='^' || op2=='(')
						flag = 0;
					else
					    flag = 1;
					break;
		case '+' :
					if(op2==')' || op2=='+' || op2=='-')
					{
						flag = 1;
					}
					else
					{
						flag = 0;
					}
					break;
		case '-' :
					if(op2==')' || op2=='+' || op2=='-')
					{
						flag = 1;
					}
					else
					{
						flag = 0;
					}
					break;
	}
	return flag;
}

int main()
{
	struct stack opstk;
	char postfix[80],infix[80];
	opstk.top = -1;
	char ch,symbol;
	int i=0,j=0;
	
	printf("Enter Infix expression = ");
	scanf("%s",infix);
	
	for(i=0;infix[i]!='\0';i++)
	{
		ch = infix[i];
		
		if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
		{
			postfix[j] = ch;
			j++;
		}
		else
		{
			while(!empty(&opstk) && priority(peek(&opstk),ch))
			{
				symbol = pop(&opstk);
				postfix[j] = symbol;
				j++;
			}
			if(empty(&opstk) || ch!=')')
			{
				push(&opstk,ch);
			}
			else
			{
				symbol = pop(&opstk);
			}
		}
	}
		while(!empty(&opstk))
		{
			symbol = pop(&opstk);
			postfix[j] = symbol;
			j++;
		}
		postfix[j] = '\0';
		printf("\n Postfix expression = %s.\n",postfix);
}
