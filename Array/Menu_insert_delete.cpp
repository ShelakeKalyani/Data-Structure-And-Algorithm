/* Program name = perform operations on array.
   Developr name = shelake kalyani
   Date = 25-07-2021        */
   
#include<stdio.h>
#include<stdlib.h>
#define SIZE 101
void insert(int arr[],int);
void del(int arr[],int);
void update(int arr[],int);
void Linear(int arr[],int);
void Binary(int arr[],int);
void display(int arr[],int);
int ex(int);
int main()
{
	int arr[SIZE]={0};
	int num,i,value,choice,flag=0,choice_s;;
	
	printf("Enter how many elements you want = ");
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
	
	printf("Your array = \n");
	for(i=0;i<num;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	while(1)
	{
	printf("****MENU****\n");
	printf("1.Insert\n");
	printf("2.Delete\n");
	printf("3.Update\n");
	printf("4.Search\n");
	printf("5.Display\n");
	printf("6.Exit\n");
	
	printf("Enter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: insert(arr,num);
		        num++;
		        break;
		case 2: del(arr,num);
		        num--;
		        break;
		case 3:
				update(arr,num);
				break;
		case 4:
				printf("*****Search Menu*****\n");
				printf("1.Linaer Search\n");
				printf("2.Binary Search\n");
				
				printf("Enter your choice = ");
				scanf("%d",&choice_s);
				
				switch(choice_s)
				{
					case 1:
							Linear(arr,num);
							break;
					case 2:
							Binary(arr,num);
							break;
					default:
							printf("Invalid choice..\n");
				}
				break;
	    case 5: display(arr,num);
	            break;
	    case 6: exit(0);
	    
		default : printf("Invalid input.\n");
	}
 }
}
	
void insert(int arr[],int num)          
{
		int index,value,i;
		printf("Enter index = ");          
	scanf("%d",&index);
	
	if(index<0 || index>num-2)
	{
		printf("Invalid index.\n");
		return ;
	}
	
	printf("Enter value = ");               
	scanf("%d",&value);
	
	for(i=num-1;i>=index;i--)
	{
		arr[i+1] = arr[i];                 
	}
	arr[index] = value;
	num++;
	printf("\nAfter inserting value \n");
	
	for(i=0;i<num;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
}

void del(int arr[],int num)
{
	int index,i;
	printf("Enter index = ");
	scanf("%d",&index);
	
	if(index<0 || index>num-2)
	{
		printf("Invalid index.\n");
		return ;
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
}

void update(int arr[],int num)
{
	int index,value;
	printf("\n Enter index which you want to update = ");
	scanf("%d",&index);
	
		if(index<0 || index>num-1)
	{
		printf("Invalid index.\n");
		return;
	}
	
	printf("Enter value = ");
	scanf("%d",&value);
	
	arr[index]=value;
}

void Linear(int arr[],int num)
{
	int value;
	
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
}

void Binary(int arr[],int num)
{
	int value,flag = 0;
	printf("\nEnter value to search = ");
	scanf("%d",&value);
	
	int low=0;
	int high=num-1;
	int mid=(low+high)/2;
	
	while(low<=high)
	{
		mid=(low+high)/2;
		
		if(value==arr[mid])
		{
			flag=1;
			break;
		}
		else if(value>arr[mid])
		{
			low=mid+1;
		}
		else if(value<arr[mid])
		{
			high=mid-1;
		}
	}
	if(flag==1)
	{
		printf("\nValue found at %d index.\n",mid);
	}
	else
	{
		printf("\nValue not found.\n");
	}
}

void display(int arr[],int num)
{
   	for(int i=0;i<num;i++)
	{
		printf("arr[%d] =%d\n",i,arr[i]);
	}
}


