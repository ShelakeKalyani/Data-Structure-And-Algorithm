#include<stdio.h>
#define SIZE 101
int choice=0,flag=0;
int arr[SIZE]={0};
int index,value,num,pass=0,noc=0,temp=0;
void Create();   
void Insert();    
void Delete();    
void Update();    
void Display();   
void L_search();
void Binary_search();
void Bubble_sort();    
void Insertion_sort();

int main()
{
	while(1)
	{
	
		printf("\n** Menu for Array **\n");
		puts("1.Create");
		puts("2.Insert");
		puts("3.Delete");
		puts("4.Update");
		puts("5.Display");
		puts("6.Search");
		puts("7.Sort");
		puts("8.Exit");
		printf("****\n");
		printf("Enter Your Choice = ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				Create();
				flag=1;
				break;
			case 2:
				if(flag==0)
				{
			     printf("Sorry!! You can't insert elements...You want to create array first.\n");
			     break;
			    }
			   Insert();
				break;
			case 3:
				if(flag==0)
				{
					printf("Sorry!! You can't delete elements...You want to create array first.\n");
					break;
		        }
		    	Delete();    
				break;  
			case 4:
				if(flag==0)
				{
					printf("Sorry!! You can't update elements...You want to create array first.\n");
					break;
			    }
			    Update();   
				break;
			case 5:
				if(flag==0)
				{
					printf("Sorry!! You can't display elements...You want to create array first.\n");
					break;
			   }
			 Display();   
				break;
			case 6:
			     printf("\n **Menu for search**\n");
			     puts("1.Linear Search");
			     puts("2.Binary Search");
			     
			     printf("Enter your choice = ");
			     scanf("%d",&choice);
			     
			     switch(choice)
			     {
			     	case 1:
			     			if(flag==0)
				         {
				         	printf("Sorry!! You can't search elements...You want to create & sort array first.\n");
				         	break;
			             }
			             L_search();
			             break;
			        case 2:
			     			if(flag==0) 
				         {
				         	printf("Sorry!! You can't search elements...You want to create & sort array first.\n");
				         	break;
			            }
			            Binary_search();
			            break;
			        default:
			        	  printf("\n Invalid choice");
				}
				break;
			case 7: 
			      printf("\n **Menu for sort**\n");
			     puts("1.Bubble sort (Ascending order.)");
			     puts("2.Insertion sort (Ascending order.)");
			     
			     printf("Enter your choice = ");
			     scanf("%d",&choice);
			     
			     switch(choice)
			     {
			     	case 1:
			     			if(flag==0)
				         {
				         	printf("Sorry!! You can't sort elements...You want to create array first.\n");
				         	break;
			             }
			             Bubble_sort();
			             flag=2;
			             break;
			        case 2:
			     			if(flag==0)
				         {
				         	printf("Sorry!! You can't search elements...You want to create array first.\n");
				         	break;
			             }
			             Insertion_sort();
			             flag=3;
						 break; 
			        default:
			        	  printf("\n Invalid choice");
				}
				break;
			case 8:
				 return 0;
		default:
				printf("Sorry !! Invalid Choice\nPlease select correct option\n");		
		}
	}
	return 0;
}

void Create()
{
		printf("Enter how many number you want = ");
		scanf("%d",&num);
	
		if(num<=0 || num>SIZE)
		{
			printf("Invalid Input\n");
			return;
		}
		for(int i=0;i<num;i++)     
		{
			printf("Enter Value %d = ",i+1);
			scanf("%d",&arr[i]);
		}
		return;
}
void Insert()
{
		if(num==SIZE)
		{
			printf("Sorry...Array is full can not insert..\n");
			return;
		}
		
		printf("Enter Index = ");
		scanf("%d",&index);
	                      
		if(index<0 || index>=num+1)
		{
			printf("Invalid index.\n");
			return;
		}                              
	
		printf("Enter Value = ");
		scanf("%d",&value);
	                                
		for(int i=num-1;i>=index;i--)   
		{
			arr[i+1]=arr[i];
		}
		arr[index] = value;
		num++;
		return;
}
void Update()
{
		printf("Enter Index = ");
		scanf("%d",&index);
	                      
		if(index<0 || index>num-1)
		{
			printf("Invalid index.\n");
			return;
		}                              
	
		printf("Enter New Value  = ");
		scanf("%d",&value);
	    arr[index] = value;
	    return;
}
void Delete()
{
		printf("Enter Index which data you want delete = ");
		scanf("%d",&index);
	                      
		if(index<0 || index>num-1)
		{
			printf("Invalid index.\n");
			return;
		}                             
	    for(int i=index;i<=num-1;i++)  
		{
			arr[i]=arr[i+1];
		}
	//	arr[num-1] = 0;     ( for this condition do i<num-1 in for loop. )
		num--;
		return;
}
void Display()
{
	if(num==0)
	{
		printf("Array is Empty\n");
		return;
	}
	for(int i=0;i<num;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	return;
}

void Bubble_sort()
{
		
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
	
//	printf("\n Total pass = %d",pass);                     // num-1
//	printf("\n Total number of comparison = %d",noc);      // (num-1)^2
	return ;
}

void Insertion_sort()
{
	int j=0,key;
		for(int i=1;i<num;i++)
	{
		key = arr[i];
		j = i-1 ;
		
		while(j>=0 && key<arr[j])
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	
	printf("\n Array after sorted = \n");
		for(int i=0;i<num;i++)
	{
		printf("%d\t",arr[i]);
	}
}

void L_search()
{
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
	return ;
}

void Binary_search()
{
	Bubble_sort();
	int low,high,mid;
		printf("\nEnter value to search = ");
	scanf("%d",&value);
	
	low=0,high=num-1,mid=(low+high)/2;
	int flag=0;
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
		printf("\nValue found at %d index.",mid);
	}
	else
	{
		printf("\nValue not found.");
	}
	return ;
}
