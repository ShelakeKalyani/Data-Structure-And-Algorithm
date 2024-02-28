#include<stdio.h>
int main()
{
	int num = 0;
	
	printf("Enter how many elements you want in array = ");
	scanf("%d",&num);
	
	int arr[num];
	
	for(int i=0;i<num;i++)
	{
		printf("Enter element = ");
		scanf("%d",&arr[i]);
	}
	
	printf("YOUR ARAAY = \n");
	
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
