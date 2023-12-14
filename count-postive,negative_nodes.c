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
	int z=0,p=0,n=0;
	struct node *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		if(temp->data!=0)
			z++;
		if(temp->data%2==0)
			p++;
		if(temp->data%2!=0)
			n++;
	}
	printf("\nPositive nodes=%d",p);
	printf("\nNegative nodes=%d",n);
	printf("\nNON-zero nodes=%d",z);
}
int main()
{
	struct node *list=NULL;
	list=create(list);
	printf("Display=");
	disp(list);
	count(list);	
}
