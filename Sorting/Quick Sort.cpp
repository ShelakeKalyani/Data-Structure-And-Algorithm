/* Program name = Sort an array element using Quick Sort.
   Developr name = shelake kalyani
   Date = 19-07-2021        */

#include<stdio.h>
void Quick_Sort(int[],int,int);
int Partition(int [],int,int);
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

	Quick_Sort(arr,0,num-1);
	
	printf("\nArray after sort = \n");
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}

void Quick_Sort(int arr[],int low,int h)
{
	int index;
	
	if(low<h)
	{
		index = Partition(arr,low,h);
		Quick_Sort(arr,low,index-1);
		Quick_Sort(arr,index+1,h);
	}
	return;
}

int Partition(int arr[],int low,int high)
{
	int v,i,j,temp;
	v = arr[low];
	i = low+1;
	j = high;
	do
	{
		while(arr[i]<=v)
		{
			i++;
		}
		while(arr[j]>v)
		{
			j--;
		}
		if(i<j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}while(i<j);
	arr[low] = arr[j];
	arr[j] = v;
	return j;
}



/*
Output :
       Enter how many numbers you want in an array = 5
		Enter 5 elements =
		12
		78
		3
		99
		65
		Array before sort =
		12 78 3 99 65
		Array after sort =
		3 12 65 78 99
*/
