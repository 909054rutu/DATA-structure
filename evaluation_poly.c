#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct node
{
	int coeff,expo;
	struct node *next;
 }NODE;
 #define NODEALLOC (NODE *)malloc(sizeof(NODE))
 NODE *create(NODE* list)
 {
 	NODE *newnode,*temp;
 	int n,i;
 	printf("Enter limit of poly: ");
 	scanf("%d",&n);
 	for(i=n-1;i>=0;i--)
 	{
 		newnode=NODEALLOC;
 		printf("Enter coeff: ");
 		scanf("%d",&newnode->coeff);
 		newnode->expo=i;
 		newnode->next=NULL;
 		if(list==NULL)
 		{
 			list=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	 }
	 return list;
 }
 
float evaluate(NODE *list,int x)
{
	float ans=0;
	NODE *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		ans=ans+(temp->coeff)*pow(x,temp->expo);
	}
	return ans;
}
int main()
{
 	int x;
 	float z;
 	NODE *list=NULL;
 	list=create(list);
 	//disp(list);
 	printf("\nEnter value of x:");
 	scanf("%d",&x);
 	z=evaluate(list,x);
 	printf("\nEvaluation of poly=%f",z);
}
