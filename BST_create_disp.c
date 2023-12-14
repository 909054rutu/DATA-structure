#include<stdio.h>
#include<stdlib.h>

typedef struct node
    {
      int info;
      struct node *left,*right;
    }NODE;

NODE * createBST(NODE *root)
{
   NODE * newnode,*temp,*parent;
   int n,i,num;
   printf("Enter limit:"); 
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      newnode=(NODE*)malloc(sizeof(NODE));
       printf("Enter value:");
       scanf("%d",&newnode->info);
       newnode->left=newnode->right=NULL;
       if(root==NULL)
       {
         root=newnode;
       }
       else
       {
           temp=root;
           while(temp!=NULL)   //It is used to find parent node...
           {
              parent=temp;
               if(newnode->info<temp->info)
                temp=temp->left;
              else
                temp=temp->right;
           }
           if(newnode->info<parent->info)
              parent->left=newnode;
           else
            parent->right=newnode;
       }//else
   } //for
  return root;
}

void inorder(NODE *root)
{
   if(root!=NULL)
  {
      inorder(root->left);
      printf("%d\t",root->info);
      inorder(root->right);
  }
}
NODE * insert(NODE *root,int n)
{
	if(root==NULL)
	{
		root=(NODE *)malloc(sizeof(NODE));
		root->info=n;
		root->left=root->right=NULL;
	}
	else
	{
		if(n<root->info)
			root->left=insert(root->left,n);
		else
			root->right=insert(root->right,n);
	}
	return root;
}
int main()
{
	int num,ch;
   NODE *root=NULL;
   do
   {
   	printf("\n1-create \n2-disp \n3-insert");
   	printf("\nEnter choice:");
   	scanf("%d",&ch);
   	switch(ch)
   	{
   		case 1:root=createBST(root);
		   		break;
		case 2:inorder(root);
				break;
		case 3:printf("\nEnter number:");
   				scanf("%d",&num);
				 root=insert(root,num);
				 break;	
	}
   }while(ch<4);
    //root=createBST(root);
    //printf("\n Display Inorder:");
       //inorder(root);
}
