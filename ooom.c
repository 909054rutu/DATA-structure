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
printf("\t%d",temp->data);
}
return list;
}
struct node *insert_beg(struct node *list,int num)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num;
newnode->next=list;
list=newnode;
return list;
}
struct node *insert_last(struct node *list,int num)
{
struct node *temp,*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->next=NULL;
newnode->data=num;
for(temp=list;temp->next!=NULL;temp=temp->next)
temp->next=newnode;
return list;
}
int main()
{
struct node *list=NULL;
int ch,num,pos;
do
{
printf("\n1-create\n2-disp\n3insert_beg\n4-insert_last\n5-insert pos\n6-delete\nENTER CHOICE");
scanf("%d",&ch);
switch(ch)
{
case 1:list=create(list);
break;
case 2:disp(list);
break;
case 3:printf("enter no");
scanf("%d",&num);
list=insert_beg(list,num);
case 4:printf("enter no to last");
scanf("%d",&num);
list=insert_last(list,num);
break;

}
}while(ch<4);
}