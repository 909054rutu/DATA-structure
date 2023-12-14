#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *left,*right;
};

struct node *insert(struct node *root,int num)
{
   if(root==NULL) 
   {
       root=(struct node*)malloc(sizeof(struct node));
       root->data=num;
       root->left=NULL;
       root->right=NULL;
      return root;
   }
   if(num>root->data)
   {
        root->right=insert(root->right,num);
        return root;
    }
   if(num<root->data)
   {
        root->left=insert(root->left,num);
        return root;
    }
}

void disp_leaf(struct node* root)
{
    if(root!=NULL)
    {
	 disp_leaf(root->left);
	 if(root->left==NULL&&root->right==NULL)
     	 printf("%d\t ",root->data);
	 disp_leaf(root->right);
     }
}
int main()
{
	int i,n,num;
	    struct node* root=NULL;
    printf("Enter limit:");
    scanf("%d",&n);   
    for(i=0;i<n;i++)
    {
     printf("Enter number:");
     scanf("%d",&num);
    root=insert(root,num);
     }
     printf("\n Display Leaf Nodes:");
    disp_leaf(root);
}
