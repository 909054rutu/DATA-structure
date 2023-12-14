#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node* next,*prev;
}NODE;
NODE *temp,*temp1,*newnode;
int i,n;
#define NODEALLOC (NODE *)malloc(sizeof(NODE))
NODE *create(NODE *list)
{
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=NODEALLOC;
		printf("Enter number:");
		scanf("%d",&newnode->data);
		if(list==NULL)
		{
			temp=list=newnode;
			temp->next=list;
			list->prev=temp;
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
			temp->next=list;
			list->prev=temp;
		}
	}
	return list;
}
void disp(NODE *list)
{
	temp=list;
	do
	{
		printf("\t%d",temp->data);
		temp=temp->next;
	}while(temp!=list);
}
int main()
{
	NODE *list=NULL;
	list=create(list);
	disp(list);			
}
