#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
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
void count(struct node *list)
{
	int cnt=0;
	struct node *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		cnt++;
	}
	printf("\nTotal nodes=%d",cnt);
}
int main()
{
	struct node *list=NULL;
	list=create(list);
	printf("Display=");
	disp(list);
	count(list);	
}
