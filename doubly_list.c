#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next,*prev;
}NODE;
#define NODEALLOC (NODE*)malloc(sizeof(NODE))
NODE *create(NODE *list)
{
	NODE *temp,*newnode;
	int n,i;
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=NODEALLOC;
		printf("Enter number:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;	
		if(list==NULL)
		{
			list=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
	}
	return list;
}
void disp(NODE *list)
{
	NODE *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		printf("\t%d",temp->data);
	}
}
void odd(NODE *list)
{
	NODE *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
                if((temp->data%2)!=0)
		printf("\t%d",temp->data);
	}
}

int main()
{
	NODE *list=NULL;
 int ch;
 {

 
	list=create(list);
	disp(list);
 odd(list);
}
