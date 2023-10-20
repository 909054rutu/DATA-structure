#include<stdio.h>
#include<stdlib.h>
struct tree 
{
               int data;
               struct tree *left,*right;
}*root;
struct tree *insert(struct tree *root,int num)
{
               if(root==NULL)
               {
                              root=(struct tree*)malloc(sizeof(struct tree));
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
void inorder(struct tree *root)
{
               if(root!=NULL)
               {
                              inorder(root->left);
                              printf("%d\t",root->data);
                               inorder(root->right);
                              
               }
}
void preorder(struct tree *root)
{
               if(root!=NULL)
               {
                              
                              printf("%d\t",root->data);
                              preorder(root->left);
                               preorder(root->right);
                              
               }
}
void postorder(struct tree *root)
{
               if(root!=NULL)
               {
                              postorder(root->left);
                               postorder(root->right);
                               printf("%d\t",root->data);
                              
               }
}
int main()
{
           root=NULL;
               int num,i,n,ch;
               do{
                              printf("\n1-insert\n2-inorder\n3-preoder\n4-postorder");
                              scanf("%d",&ch);
                              switch(ch)
               {
               
               case 1:printf("enter limit");
               scanf("%d",&n);
               for(i=0;i<n;i++)
               {
                              printf("enter number");
                              scanf("%d",&num);
                              root=insert(root,num);
               }
               break;
               case 2:inorder(root);
               break;
               case 3:preorder(root);
               break;
               case 4:postorder(root);
               break;
}
}while(ch<5);
}
