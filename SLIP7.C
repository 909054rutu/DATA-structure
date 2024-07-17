#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *create(struct node *list)
{
struct node *newnode,*temp;
int i,n;
printf("enter limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter value");
scanf("%d",&newnode->data);
newnode->next=NULL;
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

void disp(struct node *list)
{
struct node *temp;
for(temp=list;temp!=NULL;temp=temp->next)
{
printf("%d",temp->data);
}
}
int cnt_t(struct node *list)
{
struct node *temp;
int cnt=0;
for(temp=list;temp!=NULL;temp=temp->next)
{
cnt++;
printf("%d",temp->data);
}
return cnt;
}
int main()
{
struct node *list=NULL;
int ch,cnt;
clrscr();
do
{
printf("\n 1create \n2-disp\n3-cnt");
scanf("%d",&ch);
switch(ch)
{
case 1:list=create(list);
break;
case 2:disp(list);
break;
case 3:cnt=cnt_t(list);
printf("count node=%d",cnt);
break;
}
}while(ch<4);
getch();
return 0;
}