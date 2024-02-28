/*
   Developer Name = Shelake Kalyani 
   Program name = update array element.
   Date = 26-07-2021          
*/

#include<stdio.h>
#define SIZE 101
int main()
{
	int arr[SIZE];
	int num,value,index,i;
	
	printf("Enter how many element you want in array = ");
	scanf("%d",&num);
	
		if(num<=0 || num>SIZE-1)
	{
		printf("Invalid input.\n");
		return -1;
	}
	
    for(i=0;i<num;i++)
    {
    	printf("Enter element %d = ",i+1);
    	scanf("%d",&arr[i]);
	}
	puts("Array before updating = \n");
	for(i=0;i<num;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	
	printf("\n Enter index which you want to update = ");
	scanf("%d",&index);
	
		if(index<0 || index>num-1)
	{
		printf("Invalid index.\n");
		return -1;
	}
	
	printf("Enter value = ");
	scanf("%d",&value);
	
	arr[index]=value;
	for(i=0;i<num;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}	
}


/*
Output:
	Enter how many element you want in array = 5
	Enter element 1 = 10
	Enter element 2 = 20
	Enter element 3 = 30
	Enter element 4 = 40
	Enter element 5 = 50
	Array before updating =
	
	arr[0] = 10
	arr[1] = 20
	arr[2] = 30
	arr[3] = 40
	arr[4] = 50
	
	 Enter index which you want to update = 1
	Enter value = 100
	arr[0] = 10
	arr[1] = 100
	arr[2] = 30
	arr[3] = 40
	arr[4] = 50
*/

