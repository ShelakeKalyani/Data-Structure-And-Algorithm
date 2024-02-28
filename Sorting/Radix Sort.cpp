/* Program name = Sort an array element using Radix Sort.
   Developr name = shelake kalyani
   Date = 21-07-2021        */

#include<stdio.h>
void Radix_Sort(int[],int);
int Max_Ele(int[],int);
int main()
{
	int num,max;
	
	printf("Enter how many numbers you want in an array = ");
	scanf("%d",&num);
	
	int arr[num];
	
	printf("Enter %d elements = \n");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Array before sort = \n");
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	
	Radix_Sort(arr,num);
	
	printf("Array after sort = \n");
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}

int Max_Ele(int  arr[],int num)
{
	int max;
	
	max = arr[0];
	
	for(int i=0;i<num;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	 } 
	 return max;
}

void Count_Sort(int arr[],int num,int pass)
{
	int brr[10] = {0};
	int index;
	int crr[num];
	
	for(int i=0;i<num;i++)
	{
		brr[(arr[i]/pass)%10]++;
	}
	
	for(int i=1;i<10;i++)
	{
		brr[i] = brr[i]+brr[i-1];
	}
	for(int i=num-1;i>=0;i--)
	{
		index = --brr[(arr[i]/pass)%10];
		crr[index] = arr[i];
	}
	
	for(int i=0;i<num;i++)
	{
		arr[i] = crr[i];
	}
	return;
}

void Radix_Sort(int arr[],int num)
{
	int max;

	max = Max_Ele(arr,num);
	//printf("\nMaximum element in array = %d.\n",max);
	
	int pass = 1;
	{
		while(max/pass>0)
		{
			Count_Sort(arr,num,pass);
			pass = pass*10;
		}
	}
	return;
}



/*
Output:
		Enter how many numbers you want in an array = 5
		Enter 5 elements =
		15
		2
		99
		54
		1
		Array before sort =
		15 2 99 54 1
		
		Array after sort =
		1 2 15 54 99
	
*/
