#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
int data;
struct node *next,*prev;
};
struct node *create(struct node *list)
{
int n,i;
struct node *temp,*newnode;
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
newnode->prev=temp;
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
list->prev=newnode;
list=newnode;
return list;
}
int main()
{
struct node *list=NULL;
int ch,num;
clrscr();
do{
printf("\n1-create \n 2-disp\n3-insert_beg");
printf("\n enter choice");
scanf("%d",&ch);
switch(ch)
{
case 1:list=create(list);
break;
case 2:disp(list);
break;
case 3:printf("enter newnode data");
scanf("%d",&num);
list=insert_beg(list,num);
break;
}
}while(ch<4);
getch();
return 0;
}
