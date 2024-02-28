/* Program name = Sort an array element using Selection Sort.
   Developr name = shelake kalyani
   Date = 15-07-2021        */

#include<stdio.h>
int main()
{
	int num,min=0,temp=0;
	
	printf("Enter how many elements you want in array = ");
	scanf("%d",&num);
	
	int arr[num];
	
	for(int i=0;i<num;i++)
	{
		printf("Enter element %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\n Array before sorting = \n");
	for(int i=0;i<num;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	printf("\n\n*************************");
	for(int i=0;i<num-1;i++)
	{
		min=i;
		for(int j=i+1;j<num;j++)
		{
			if(arr[j]<arr[min])
		{
			min=j;
		}
	}
	
	if(i!=min)
	{
		temp     = arr[i];
		arr[i]   = arr[min];
		arr[min] = temp;
	}
	printf("\n Array after pass %d = \n",i+1);
		for(int i=0;i<num;i++)
	{
		printf("%d\t",arr[i]);
	}
  }
  printf("\n*************************\n");
  printf("\n Array after sorting = \n");
	for(int i=0;i<num;i++)
	{
		printf("%d\t",arr[i]);
	}
}


/*
Output:
	Enter how many elements you want in array = 5
	Enter element 1 = 12
	Enter element 2 = 43
	Enter element 3 = 1
	Enter element 4 = 8
	Enter element 5 = 45
	
	 Array before sorting =
	12      43      1       8       45
	
	*************************
	 Array after pass 1 =
	1       43      12      8       45
	 Array after pass 2 =
	1       8       12      43      45
	 Array after pass 3 =
	1       8       12      43      45
	 Array after pass 4 =
	1       8       12      43      45
	*************************
	
	 Array after sorting =
	1       8       12      43      45
*/




