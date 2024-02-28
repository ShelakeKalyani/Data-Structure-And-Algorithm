/*Programmer name = Shelake Kalyani
   Programme name = Create tree and travel in preordered,postordered,inordered
   Date = 11-04-2022 */

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node* left;
	struct node* right;
};

typedef struct node* NODEPTR;

NODEPTR create()
{
	NODEPTR p,newnode,tree = NULL;
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
				if(newnode->left < p->left)
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
		printf("Do you want to continue(Y/n) = ");
		fflush(stdin);
		scanf("%c",&ans);
		//ans = getchar();
		//fflush(stdin);
	}while(ans=='Y' || ans=='y');
	
	return tree;
}


void Preorder(NODEPTR tree)
{
    if(tree!=NULL)
    {
    	printf("%d ",tree->info);
    	Preorder(tree->left);
    	Preorder(tree->right);
    }
}

void Inorder(NODEPTR tree)
{
    if(tree!=NULL)
    {
    	Inorder(tree->left);
    	printf("%d ",tree->info);
    	Inorder(tree->right);
    }
}


void Postorder(NODEPTR tree)
{
    if(tree!=NULL)
    {
    	Postorder(tree->left);
    	Postorder(tree->right);
    	printf("%d ",tree->info);
    }
}


int main()
{
	NODEPTR tree = NULL;
	
    	tree = create();
    	
    	printf("\nPreorder travel = ");
    	Preorder(tree);
    	
    	printf("\nInorder travel = ");
    	Inorder(tree);
    	
    	printf("\nPostorder travel = ");
    	Postorder(tree);

	return 0;
		
}

