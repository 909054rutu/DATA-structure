#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *create(struct node *list,int num)
{
struct node *newnode;
while(num>0)
{

newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num%10;
num=num/10;
newnode->next=list;
list=newnode;
}
return list;
}
struct node *disp(struct node *list)
{
struct node *temp;
for(temp=list;temp!=NULL;temp=temp->next)
{
printf("\t%d",temp->data);
{
if(temp->next!=NULL)
printf(",");
}
}
return list;
 }
 int main()
 {
    struct node *list=NULL;
    int num;
    printf("enter no");
    scanf("%d",&num);
 list=create(list,num);
 disp(list);
 getch();
 return 0;
 }


