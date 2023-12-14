#include<stdio.h>
#include<stdlib.h>
struct node{
struct node *next;
int data;
};
struct node*create(struct node *list)
{
struct node *temp,*newnode;
int n,i;
printf("enter limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
newnode->next=NULL;
printf("enter value");
scanf("%d",&newnode->data);
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
struct node *disp(struct node *list)
{
struct node *temp;
for(temp=list;temp!=NULL;temp=temp->next)
{
printf("%d",temp->data);
}
return list;
}
struct node *concat(struct node *list1,struct node *list2)
{
struct node *temp;
{
for(temp=list1;temp->next!=NULL;temp=temp->next)
temp->next=list2;
return list1;
}
}
int main()
{
struct node *list1=NULL,*list2=NULL;
list1=create(list1);
list2=create(list2);
struct node*list3=concat(list1,list2);
disp(list3);
}

