#include<stdio.h>
int main()
{
	int num = 0,temp = 0;
	
	printf("Enter how many elements you want in array = ");
	scanf("%d",&num);
	
	int arr[num];
	
	for(int i=0;i<num;i++)
	{
		printf("Enter element = ");
		scanf("%d",&arr[i]);
	}
	
	printf("ARAAY BEFORE SORTING = \n");
	
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	
	for(int i=0;i<num;i++)
	{
		for(int j=i+1;j<num;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("\nARAAY AFTER SORTING = \n");
	
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
