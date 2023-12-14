#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*front,*rear,*temp,*newnode;
void init()
{
	front=rear=NULL;
}
int isempty()
{
	if(front==NULL)
		return 1;
	else
		return 0;
}
void insert(int num)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=NULL;
	if(isempty())
		front=rear=newnode;
	else
	{
		rear->next=newnode;
		rear=newnode;
		printf("\ninsert successfully");
	}
}
void delq()
{
	int val;
	if(isempty())
		printf("\nqueue is underflow");
	else
	{
		val=front->data;
		temp=front;
		front=front->next;
		free(temp);
		printf("\nDeleted value=%d",val);
	}
}
void disp()
{
	for(temp=front;temp!=NULL;temp=temp->next)
		printf("\t%d",temp->data);
}
int main()
{
	int num,ch;
	init();
	do
	{
		printf("\n1-insert \n2-del \n3-disp \n4-exit");
		printf("\nEnter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\nEnter number:");
				scanf("%d",&num);
				insert(num);
				break;
			case 2:delq();
				break;
			case 3:disp();
				break;
			case 4:exit(0);
				break;
		}
	}while(ch<5);
}
