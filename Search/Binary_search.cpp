#include<stdio.h>
int main()
{
	int num=0,value,low,high,mid,flag=0;
	printf("Enter how many elements you want = ");
	scanf("%d",&num);
	
	if(num<=0)
	{
		printf("Invalid number.\n");
	}
	
	int arr[num];
	
	for(int i=0;i<num;i++)
	{
		printf("Enter element %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n Your Array = \n");
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter value to search = ");
	scanf("%d",&value);
	
	low=0,high=num-1,mid=(low+high)/2;
	
	while(low<=high)
	{
		mid=(low+high)/2;
		
		if(value==arr[mid])
		{
			flag=1;
			break;
		}
		else if(value>arr[mid])
		{
			low=mid+1;
		}
		else if(value<arr[mid])
		{
			high=mid-1;
		}
	}
	if(flag==1)
	{
		printf("\nValue found at %d index.",mid);
	}
	else
	{
		printf("\nValue not found.");
	}
	return 0;
}



/*
Output 1:
		Enter how many elements you want = 5
		Enter element 1 = 10
		Enter element 2 = 20
		Enter element 3 = 30
		Enter element 4 = 40
		Enter element 5 = 50
		
		 Your Array =
		10 20 30 40 50
		Enter value to search = 90
		
		Value not found.
		
Output 2:
		Enter how many elements you want = 4
		Enter element 1 = 11
		Enter element 2 = 22
		Enter element 3 = 33
		Enter element 4 = 44
		
		 Your Array =
		11 22 33 44
		Enter value to search = 22
		
		Value found at 1 index.	
*/
