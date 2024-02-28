/* Program name = perform operations on array.
   Developr name = shelake kalyani
   Date = 16-07-2021        */

#include<stdio.h>
int main()
{
	int num=0,temp=0,noc=0,pass=0;
	printf("Enter how many elements you want = ");
	scanf("%d",&num);
	
	if(num<=0)
	{
		printf("Invalid size.\n");
		return -1;
	}
	int arr[num];
	
	for(int i=0;i<num;i++)
	{
		printf("Enter number %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n Array before sorting = \n");
	for(int i=0;i<num;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	for(int i=0;i<num-1;i++)
	{
		pass++;
		for(int j=0;j<num-i-1;j++)
		{
			noc++;
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
		printf("\n Array after sorting = \n");
	for(int i=0;i<num;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	//printf("\n Total pass = %d",pass);                     // num-1
	//printf("\n Total number of comparison = %d",noc);      // (num-1)^2
	return 0;
}


/*
Output:
		Enter how many elements you want = 5
		Enter number 1 = 22
		Enter number 2 = 11
		Enter number 3 = 99
		Enter number 4 = 45
		Enter number 5 = 10
		
		 Array before sorting =
		22      11      99      45      10
		 Array after sorting =
		10      11      22      45      99
*/
