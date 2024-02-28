#include<stdio.h>
void Merge_Sort(int [],int,int);
void Merge(int [],int,int,int);
int main()
{
	int num = 0,temp;
	
	printf("Enter how many numbers you want in array = ");
	scanf("%d",&num);
	
	int arr[num];
	
	printf("Enter %d elements in an array = \n",num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nYour array before sort = \n");
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	Merge_Sort(arr,0,num-1);
	
	printf("\nYour array after sort = \n");
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

void Merge_Sort(int arr[],int i,int num)
{
	int j = num;
	int k;
	
	if(i<j)
	{
		k = (i+j)/2;
		Merge_Sort(arr,i,k);
		Merge_Sort(arr,k+1,j);
		Merge(arr,i,k,j);
	}
	
}

void Merge(int a[],int l,int m,int u)
{
	int c[30],i,j,k;
	i = 1;
	j = m+1;
	k=0;
	
	while(i<=m && j<=u)
	{
		if(a[i]<a[j])
		{
			c[k] = a[i];
			k++;
			i++;
		}
		else
		{
			c[k] = a[j];
		}
	}
	
	while(i<=m)
	{
		c[k] = a[i];
		i++;
		k++;
	}
	return;
}
