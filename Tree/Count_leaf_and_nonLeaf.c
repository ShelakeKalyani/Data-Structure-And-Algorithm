/* Programmer name = Shelake Kalyani
   Programme name = Count total nodes,leaf nodes,non-leaf nodes
   Date = 11-04-2022 */

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *left, *right;
};

typedef struct node* NODEPTR;

NODEPTR Create()
{
	NODEPTR newnode,tree = NULL,p;
	char ans;
	
	do
	{
		newnode = (NODEPTR)malloc(sizeof(struct node));
		
		printf("Enter value = ");
		scanf("%d",&newnode->info);
		
		newnode->left = newnode->right = NULL;
		
		if(tree==NULL)
		{
			tree = newnode;
		}
		else
		{
			p = tree;
			while(p!=NULL)
			{
				if(newnode->info<p->info)
				{
					if(p->left==NULL)
					{
						p->left = newnode;
						break;
					}
					p = p->left;
				}
				else
				{
					if(p->right==NULL)
					{
						p->right = newnode;
						break;
					}
					p = p->right;
				}
			}
		}
		printf("Do you want to continue(Y/N) = ");
		fflush(stdin);
		scanf("%c",&ans);
	}while(ans=='Y' || ans=='y');
	
	return tree;
}

int Count_T(NODEPTR tree)
{
	int i;
	
	if(tree==NULL)
	{
		return 0;
	}
	
	i = 1 + Count_T(tree->left) + Count_T(tree->right);
	
	return i;
}


int Count_L(NODEPTR tree)
{
	int i;
	
	if(tree==NULL)
	{
		return 0;
	}
	
	if(tree->left==NULL && tree->right==NULL)
	{
		return 1;
	}
	
	i = Count_L(tree->left) + Count_L(tree->right);
	
	return i;
}

int Count_NL(NODEPTR tree)
{
	int i;
	
	if(tree==NULL)
	{
		return 0;
	}
	
	if(tree->left==NULL && tree->right==NULL)
	{
		return 0;
	}
	
	i = 1 + Count_NL(tree->left) + Count_NL(tree->right);
	
	return i;
}

int main()
{
	NODEPTR tree = NULL;
	int choice,cnt,cnt1,cnt2;
	
	tree = Create();
	
	while(1)
	{
		puts("\n********MENU*********");
		puts("1.Count Total nodes");
		puts("2.Count Leaf nodes");
		puts("3.Count non-leaf nodes");
		puts("4.Exit");
		
		printf("Enter your choice = ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
					cnt = Count_T(tree);
					printf("Total nodes = %d\n",cnt);
					break;
			case 2:
					cnt1 = Count_L(tree);
					printf("Total nodes = %d\n",cnt1);
					break;
			case 3:
					cnt2 = Count_NL(tree);
					printf("Total nodes = %d\n",cnt2);
					break;
			case 4:
					return 0;
			default:
					printf("Invalid choice.\n");
		}
	}
}
