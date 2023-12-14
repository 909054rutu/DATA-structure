#include<stdio.h>
#include<conio.h>
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
struct node *insert_beg(struct node *list,int num)
{
struct node *temp,*newnode;
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
for(temp=list;temp->next!=NULL;temp=temp->next)
newnode->data=num;
temp->next=newnode;
newnode->next=NULL;
return list;
}
struct node *delete(struct node*list,int pos)
{
struct node *temp1,*temp;
int i;
for(i=0,temp=list;i<(pos-1)&&temp!=NULL;i++,temp=temp->next)
temp1=temp->next;
temp->next=temp1->next;
free(temp1);
return list;
}
struct node *insert_pos(struct node *list,int pos,int num)
{
struct node *temp,*newnode;
int i;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num;
for(i=0,temp=list;i<(pos-1)&&temp!=NULL;i++,temp=temp->next)
newnode->next=temp->next;
temp->next=newnode;

return list;
}
int main()
{
struct node *list=NULL;
int ch,pos,num;
do
{
printf("\n1-create\n2-disp\n3insert_beg\n4-insert_last\n5-insert pos\n6-delete\nENTER CHOICE");
scanf("%d",&ch);
switch(ch)
{
case1:list=create(list);
break;
case 2:disp(list);
break;
case 3:printf("enter no to insert");
scanf("%d",&num);
insert_beg(list,num);
break;
case 4:printf("enter no to last");
scanf("%d",&num);
insert_last(list,num);
break;
case 5:printf("enter no to insert");
scanf("%d",&num);
printf("\nenter to pos");
scanf("%d",&pos);
insert_pos(list,num,pos);
break;
case 6:
printf("\n enter to delete");
scanf("%d",&pos);
delete(list,pos);
break;
}
}while(ch<7);
}


