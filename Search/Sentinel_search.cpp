//Sentinel Search

#include<stdio.h>
int Search(int [],int,int);
int main()
{
	int num = 0,index,value = 0;
	
	printf("Enter how many elements you want in array = ");
	scanf("%d",&num);
	
	int arr[num];
	
	for(int i=0;i<num;i++)
	{
		printf("Enter element = ");
		scanf("%d",&arr[i]);
	}
	
	printf("Your array = \n");
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\nEnter value to search = ");
	scanf("%d",&value);
	
	index = Search(arr,num,value);
	
	if(index==-1)
	{
		printf("Value not found.\n");
	}
	else
	{
		printf("%d Value found at %d index.\n",value,index);
	}
	return 0;
}

int Search(int arr[],int num,int value)
{
	int pos=-1;
	
	for(int i=0;i<num;i++)
	{
		if(value==arr[i])
		{
			pos = i;
			break;
		}
	}
	return pos;
}
