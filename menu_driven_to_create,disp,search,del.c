#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;
struct node * create(struct node *list)
{
	int n,i;
	struct node *newnode,*temp;
	printf("Enter limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter number : ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(list==NULL)
		{
			list=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}	
	}
	return list;
}
struct node * disp(struct node *list)
{
	struct node *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		printf("%d\t",temp->data);
	}
}
NODE * search(NODE *list, int num)
{
	NODE *temp;
	int flag=0;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		if(temp->data==num)
		return temp;	
	}
	return temp;
}
struct node * delend(struct node *list)
{
	struct node *temp,*temp1;
	for(temp=list; temp->next->next!=NULL; temp=temp->next);
	temp1=temp->next;
	temp->next=NULL;
	free(temp1);
	return list;
}
int main()
{
	struct node *list=NULL;
	int ch,num,pos;
	do
	{
		printf("\n1-create \n2-disp \n3-search \n4-delend");
		printf("\nEnter choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:list=create(list);
					break;
			case 2:disp(list);
					break;
			case 3:printf("\nEnter number : ");
					scanf("%d",&num);
					if(search(list,num)!=NULL)
						printf("Found");
					else
						printf("Not found");
			case 4:list=delend(list);
					break;
		}
	}while(ch<9);	
}
