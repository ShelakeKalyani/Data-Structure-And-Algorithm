#include<stdio.h>
int main()
{
	int num = 0,index = 0,value = 0;
	
	printf("Enter how many elements you want in array = ");
	scanf("%d",&num);
	
	int arr[num];
	
	for(int i=0;i<num;i++)
	{
		printf("Enter value = ");
		scanf("%d",&arr[i]);
	}
	
	printf("Array before Inserting element = \n");
	
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\nEnter index to insert value = ");
	scanf("%d",&index);
	
	if(index<0 || index>num)
	{
		printf("Invalid position...\n");
		return 0;
	}
	
	printf("Enter value = ");
	scanf("%d",&value);
	
	for(int i=num-1;i>=index;i--)
	{
		arr[i+1] = arr[i];
	}
	arr[index] = value;
	num++;
	
	printf("Array after Inserting element = \n");
	
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
	
}
