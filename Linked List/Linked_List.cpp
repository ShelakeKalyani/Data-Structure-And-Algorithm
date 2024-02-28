#include<stdio.h>
#include<stdlib.h>
void Createlist();
void Display();
struct node
{
	int data;
	struct node* next; 
	char ch;
};

struct node* head = NULL;

int main()
{
	int num = 0;
	printf("Enter how many nodes you want = ");
	scanf("%d",&num);
	
	printf("%d \n",sizeof(head));
	
	for(int i=0;i<num;i++)
	{
		Createlist();
	}
	 Display();
	return 0;
}

void Createlist()
{
	struct node* ptr = NULL;
	struct node* temp = head;
	int value=0;
	
	ptr = (struct node*)malloc(sizeof(struct node));
	
	printf("Enter value = ");
	scanf("%d",&value);
	
	ptr->data = value;
	ptr->next = NULL;
	
	if(head==NULL)
	{
		head = ptr;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return ;
}

void Display()
{
	struct node* temp = head;
	
	if(temp==NULL)
	{
		printf("String is empty.\n");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d -> ",temp->data);
			temp = temp->next;
		}
	}
	return ;
}    
