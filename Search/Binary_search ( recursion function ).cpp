#include<stdio.h>
int Binary_search(int [],int,int,int);
void Bubble_sort(int [],int);
#define TRUE 1
#define FALSE 0
int main()
{
	int num=0,value,Ret,low,high;
	
	printf("Enter how many elements you want = ");
	scanf("%d",&num);
	
	if(num<=0)
	{
		printf("Inavalid index.\n");
		return -1;
	}
	
	int arr[num];
	
	for(int i=0;i<num;i++)
	{
		printf("Enter element %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Array = \n");
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("Enter value to search = ");
	scanf("%d",&value);
	
	Bubble_sort(arr,num);
	
	Ret = Binary_search(arr,low,high,value);
	
	if(Ret>=0)
	{
		printf("Value found at %d index.\n",Ret);
	}
	else
	{
		printf("Value not found.\n");
	}
	return 0;
}

void Bubble_sort(int arr[],int num)
{
	int temp,flag;
	
	for(int i=0;i<num-1;i++)
	{
		flag=0;
		for(int j=0;j<num-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp  = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
	return;
}

int Binary_search(int arr[],int low,int high,int value)
{
	if(low>high)
	   return -1;
	   
	int mid = (low+high)/2;
	
	if(value==arr[mid])
	     return mid;
	     
    else if(value>arr[mid])
         return Binary_search(arr,mid+1,high,value);
         
    else if(value<arr[mid])
         return Binary_search(arr,low,mid-1,value);
}
