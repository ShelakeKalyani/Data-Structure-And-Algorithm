/* 
   Developer Name = Shelake Kalyani 
   Program name = Delete array element.
   Program date = 24-07-2021          
*/

#include<stdio.h>
#define SIZE 101
int main()
{
	int arr[SIZE]={0};
	int index,num,value,i;
	
	printf("Enter how many numbers you want = ");
	scanf("%d",&num);
	
	if(num<=0 || num>SIZE-1)
	{
		printf("Invalid input.\n");
		return -1;
	}
	
	for(i=0;i<num;i++)
	{
		printf("Enter value %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\nBefore deleting value \n");
	for(i=0;i<num;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	
	printf("Enter index = ");
	scanf("%d",&index);
	
	if(index<0 || index>num-2)
	{
		printf("Invalid index.\n");
		return -1;
	}
	
	for(i=index;i<=num-1;i++)
	{
		arr[i] = arr[i+1];
	}

	num--;
	printf("\nAfter deleting value \n");
	
	for(i=0;i<num;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	return 0;
}




/*
Output :
		Enter how many numbers you want = 5
		Enter value 1 = 10
		Enter value 2 = 20
		Enter value 3 = 30
		Enter value 4 = 40
		Enter value 5 = 50
		
		Before deleting value
		arr[0] = 10
		arr[1] = 20
		arr[2] = 30
		arr[3] = 40
		arr[4] = 50
		Enter index = 2
		
		After deleting value
		arr[0] = 10
		arr[1] = 20
		arr[2] = 40
		arr[3] = 50
*/
