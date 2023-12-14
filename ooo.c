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
void search(int num)
{
struct node *temp;
int pos,i;
for(i=1,temp=list;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next)
{
if(temp->data==num)
printf("found=%d",i);
else
printf("not found");
}
}

int main()
{
struct node *list=NULL;
int num,ch;

do
{
printf("\n1-create \n 2-disp \nsearch");
printf("\n Enter choice");
scanf("%d",&ch);
switch(ch)
{
case 1:list=create(list);
break;
case 2:disp(list);
break;
case 3:printf("enter no to search");
scanf("%d",&num);
search(num);
break;
}
}while(ch<4);
}
