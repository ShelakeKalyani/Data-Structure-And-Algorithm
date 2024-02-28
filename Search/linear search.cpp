/*
	Developer Name = Shelake Kalyani
	Program = Search an element in an arrray (Linear Search)
	Date = 04-08-2022
	Language = C
*/


#include<stdio.h>
int main()
{
	int num,value;
	
	printf("Enter how many elements you want in array = ");
	scanf("%d",&num);
	
	if(num<=0)
	{
		printf("Invalid number.\n");
	}
	
	int arr[num];
	
	for(int i=0;i<num;i++)
	{
		printf("Enter number %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Array = \n");
	for(int i=0;i<num;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	
	printf("\n Enter value which you want to search = ");
	scanf("%d",&value);
	int pos=-1;
	for(int i=0;i<num;i++)
	{
		if(value==arr[i])
		{
			pos=i;
			break;
		}
	}
	if(pos==-1)
	{
		printf("\n Value not found.\n");
	}
	else
	{
		printf("\n %d found at %d index.",value,pos);
	}
	return 0;
	
}



/*
Output 1:
		Enter how many elements you want in array = 5
		Enter number 1 = 1
		Enter number 2 = 2
		Enter number 3 = 3
		Enter number 4 = 4
		Enter number 5 = 5
		Array =
		arr[0] = 1
		arr[1] = 2
		arr[2] = 3
		arr[3] = 4
		arr[4] = 5
		
		 Enter value which you want to search = 6
		
		 Value not found.
		 
Output 2:
		Enter how many elements you want in array = 5
		Enter number 1 = 10
		Enter number 2 = 20
		Enter number 3 = 30
		Enter number 4 = 40
		Enter number 5 = 50
		Array =
		arr[0] = 10
		arr[1] = 20
		arr[2] = 30
		arr[3] = 40
		arr[4] = 50
		
		 Enter value which you want to search = 20
		
		 20 found at 1 index.
*/
