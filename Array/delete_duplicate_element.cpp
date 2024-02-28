/* Program name = To delete duplicate element in array.
   Developer name = Shelake kalyani
   Date = 26-07-2021    */
   
#include<stdio.h>
#define SIZE 101
int main()
{
	int arr[SIZE]={0};
	int num,i,j;
	
	printf("Enter how many elements you want =  ");           // 5
	scanf("%d",&num);
	
	if(num<=0 || num>SIZE-1)               
	{
		printf("Invalid input.\n");
	}
	
	for(i=0;i<num;i++)
	{
		printf("Enter element %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<num;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);    //  10  20  40  10  30
	}
     for(i=0;i<num;i++)                       // 0
	{
		for(j=i+1;j<num;j++)                  // 1  2  3
		{
			if(arr[i]==arr[j])                //  arr[1]==arr[3]
		{
			for(int k=j;k<num;k++)            //  3
			{
				arr[k]=arr[k+1];              //  arr[3]==arr[4]
			}
			num--;
		}
		}
	}
	puts("After deleting = \n");
	for(int i=0;i<num;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	return 0;
}
