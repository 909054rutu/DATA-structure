#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
int data;
struct node *next;
};
struct node *create(struct node *list)
{
struct node *newnode,*temp;
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
void disp(struct node *list)
{
struct node *temp;
for(temp=list;temp!=NULL;temp=temp->next)
{
printf("%d\t",temp->data);
}
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

struct node *insert_end(struct node *list,int num)
{
struct node *newnode,*temp;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num;
newnode->next=NULL;
for(temp=list;temp->next!=NULL;temp=temp->next);
temp->next=newnode;
return list;
}
struct node *insert_mid(struct node *list,int num,int pos)
{
struct node *newnode,*temp;
int i;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num;
for(i=1,temp=list;i<(pos-1)&&temp!=NULL;i++,temp=temp->next);
newnode->next=temp->next;
temp->next=newnode;
return list;
}

int main()
{
struct node *list=NULL;
int ch,num,pos;
clrscr();
do
{
printf("\n1-create \n 2-disp \n3-insert_beg \n 4-insert_end\n 5-insert_midd");
printf("\n Enter choice");
scanf("%d",&ch);
switch(ch)
{
case 1:list=create(list);
break;
case 2:disp(list);
break;
case 3:printf("enter num");
scanf("%d",&num);
list=insert_beg(list,num);
break;
case 4:printf("enter num");
scanf("%d",&num);
list=insert_end(list,num);
break;
case 5:printf("enter num");
scanf("%d",&num);
printf("enter pos");
scanf("%d",&pos);
list=insert_mid(list,num,pos);
break;
}
}while(ch<6);
getch();
return 0;
}

