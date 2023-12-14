#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
	int data;
	struct node *next;
}NODE;
NODE * create(NODE *list)
{
	NODE *newnode,*temp;
	int n,i;
	printf("Enter limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(NODE *)malloc(sizeof(NODE));
		printf("Enter value:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(list==NULL)	// first time list null asel tr
		{
			list=newnode;
			temp=newnode;
		}
		else	//list null nsel tr
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	return list;
}
void disp(NODE *list)
{
	NODE *temp;
	for(temp=list; temp!=NULL; temp=temp->next)
	{
		printf("%d\t",temp->data);
	}
}
NODE *concat(NODE *list1,NODE *list2)
{
	NODE *temp;
	for(temp=list1;temp->next!=NULL;temp=temp->next);
	temp->next=list2;
	return list1;
}
int main()
{
	NODE *list=NULL;
	NODE *list1=NULL;
	NODE *list2=NULL;
	list1=create(list);
	list2=create(list);
	NODE *list3=concat(list1,list2);
	disp(list3);
	
}
