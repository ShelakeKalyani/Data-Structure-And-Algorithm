/*#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *left,*right;
  
};
typedef struct node* NODEPTR;


NODEPTR Create()
{
	NODEPTR p=NULL,newnode=NULL,tree=NULL;
	char ans;
	
	do
	{
		newnode = (NODEPTR)malloc(sizeof(struct node));
		newnode->left = NULL; newnode->right = NULL;
		
		printf("Enter value = ");
		scanf("%d",&newnode->info);
		
		
		if(tree==NULL)
		{
			tree = newnode;
		}
		else
		{
			p = tree;
			while(p!=NULL)
			{
				if(newnode->info < p->info )
				{
					if(p->left==NULL)
					{
						p->left = newnode;
						break;
					}
      				else
					p = p->left;
				}
				else
				{
					if(p->right==NULL)
					{
						p->right = newnode;
						break;
					}
      				else 
					p = p->right;
				}
			}
		}
		printf("Do you want to continue(Y/N) = ");
		fflush(stdin);
		scanf("%c",&ans);
   //ans = getchar();
	}while(ans=='Y' || ans=='y');
	
	return tree;
}

NODEPTR Search(NODEPTR tree,int key)
{
	
	
	
	
	//if(tree==NULL)
	//{
		//return NULL;	
	//}	
	
	if((tree==NULL) ||(key==tree->info))
	{
		return tree;
	}
	else 
{
	if(key<tree->info)
	{
		 return Search(tree->left ,key);
	}
	else
	{
		Search(tree->right,key);
	}
}
}


int main()
{
	NODEPTR tree = NULL,res=NULL;
 int key ;
	
	tree = Create();

printf("Enter value to search = ");
	scanf("%d",&key);
	
	
	res = Search(tree,key);
	
	if(res!=NULL)
	{
		printf("\nKey value found.\n");
	}
	else
	{
		printf("\nKey value not found.\n");
	}
	
	return 0;
}*/


#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *left,*right;
};
typedef struct node* NODEPTR;


NODEPTR Create()
{
	NODEPTR p = NULL,newnode = NULL,tree=NULL;
	char ans;
	
	do
	{
		newnode = (NODEPTR)malloc(sizeof(struct node));
		
		newnode->left = newnode->right = NULL;
		
		
		printf("Enter value = ");
		scanf("%d",&newnode->info);
		
		if(tree==NULL)
		{
			tree = newnode;
		}
		else
		{
			p = tree;
			while(p!=NULL)
			{
				if(newnode->info < p->info)
				{
					if(p->left==NULL)
					{
						p->left = newnode;
						break;
					}
					else
					p = p->left;
				}
				else
				{
					if(p->right==NULL)
					{
						p->right = newnode;
						break;
					}
					else
					p = p->right;
				}
			}
		}
		printf("Do you want to continue(Y/N) = ");
		fflush(stdin);
		scanf("%c",&ans);
		//ans = getchar();
	}while(ans=='Y' || ans=='y');
	
	return tree;
}

NODEPTR Search(NODEPTR tree,int key)
{
	
	if((tree==NULL) || (key==tree->info)) 
	{
		return tree;	
	}	
	
	else
	{
		if(key<tree->info)
		{
			return Search(tree->left,key);
		}
		else
		{
			return Search(tree->right,key);
		}
	}
}


int main()
{
	NODEPTR tree = NULL,res=NULL;
	int key;
	
	tree = Create();
	
	printf("Enter value to search = ");
	scanf("%d",&key);
	
	res = Search(tree,key);
	
	if(res!=NULL)
	{
		printf("\nKey value found.\n");
	}
	else
	{
		printf("\nKey value not found.\n");
	}
	
	return 0;
}

