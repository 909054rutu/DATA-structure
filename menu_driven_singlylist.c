#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;
#define NODEALLOC (NODE*)malloc(sizeof(NODE))
NODE * create(NODE *list)
{
	int n,num,i;
	NODE *temp,*newnode;
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=NODEALLOC;
		printf("\nEnter number:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(list==NULL)
		{
			temp=list=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	return list;
}
void disp(NODE *list)
{
	NODE * temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		printf("\t%d",temp->data);
	}
}
NODE *insert(int num,int pos,NODE *list)
{
	int i;
	NODE *temp,*newnode;
	newnode=NODEALLOC;
	newnode->data=num;
	if(pos==1)
	{
		newnode->next=list;
		list=newnode;	
	}	
	else
	{
		for(i=1,temp=list;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
		newnode->next=temp->next;
		temp->next=newnode;
	}
	return list;
}
NODE *del(int pos,NODE *list)
{
	int i;
	NODE *temp,*temp1;
	if(pos==1)
	{
		temp=list;
		list=list->next;
		free(temp);
	}
	else
	{
		for(i=1,temp=list;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
		temp1=temp->next;
		temp->next=temp1->next;
		free(temp1);
	}
	return list;
}
int main()
{
	int num,pos,ch;
	NODE *list=NULL;
	do
	{
		printf("\n1-create \n2-disp \n3-insert \n4-del:");
		printf("\nEnter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:list=create(list);
					break;
			case 2:disp(list);
					break;
			case 3:printf("\nEnter number:");
					scanf("%d",&num);
					printf("\nEnter position:");
					scanf("%d",&pos);
					list=insert(num,pos,list);
					break;
			case 4:	printf("\nEnter position:");
					scanf("%d",&pos);
					list=del(pos,list);
					break;
		}
	}while(ch<5);
}
