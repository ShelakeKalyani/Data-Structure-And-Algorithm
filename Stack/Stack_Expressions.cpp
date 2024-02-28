#include<stdio.h>
#define SIZE 10
int stack[SIZE] = {0};
int top = -1;
int temp = top;
int main()
{
	char arr[10] = "A*B+P*Q";
	
	int i=0;
	while(arr[i]!='\0')
	{
		if((arr[i]>='a' && arr[i]<='z') || (arr[i]>='A' && arr[i]<='Z'))
		{
			printf("%c",arr[i]);
		}
		else if(arr[i]=='+' || arr[i]=='-' || arr[i]=='/' || arr[i]=='%' || arr[i]=='*')
		{
			if(top==-1)
			{
				top++;
				temp = top;
				stack[top] = arr[i];
			}
		}
	}
}
