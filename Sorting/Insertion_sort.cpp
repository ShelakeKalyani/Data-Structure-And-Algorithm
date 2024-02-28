#include<stdio.h>
void Insertion_sort(int [],int);
int main()
{
	int num;
	printf("Enter how many elements you want in array = ");
	scanf("%d",&num);
		if(num<=0)
	{
		printf("Invalid number.\n");
		return -1;
	}
	int arr[num];
	
    for(int i=0;i<num;i++)
	{
		printf("Enter element %d = ",i+1);       // 10  20  30  40  50
		scanf("%d",&arr[i]);
	}
	printf("\n Array before sorted = \n");
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	Insertion_sort(arr,num);
	return 0;
}

void Insertion_sort(int arr[],int num)
{
	int key,j;
	for(int i=1;i<num;i++)
	{
		//pass++;
		key = arr[i];
		j = i-1 ;
		
		while(j>=0 && key<arr[j])
		{
		//	noc++;
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	
	printf("\n Array after sorted = \n");
		for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
}
