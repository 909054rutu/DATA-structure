//concat and count non-zero element,cnt odd,cnt even
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *create(struct node *list1)
{
struct node *newnode,*temp;
int n,i;
printf("enter limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter value");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(list1==NULL)
{
temp=list1=newnode;
}
else
{
temp->next=newnode;
temp=newnode;
}
}
return list1;
}
void disp(struct node *list1)
{
struct node *temp;
for(temp=list1;temp!=NULL;temp=temp->next)
{
printf("%d\t",temp->data);
}
}
struct node *ensert_beg(struct node *list1,int num)
{
struct node *temp,*temp1,*newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
	       newnode->data=num;
	       newnode->next=list1;
	       newnode=list1;
	       return list1;
}
void count(struct node *list1)
{
	       int ecnt=0,ocnt=0,non=0;
	       struct node *temp;
	       for(temp=list1;temp!=NULL;temp=temp->next)
	     {


			     if(temp->data%2==0)
				ecnt++;
				else
				ocnt++;
		 if(temp->data!=0)
		 non++;

	       }
		printf("\n even zero=%d",ecnt);
		 printf("\n odd zero=%d",ocnt);
		  printf("\n non zero=%d",non);

}

struct node *concat(struct node *list1,struct node *list2)
{
struct node *temp;
if(list1==NULL)
return list2;
if(list2==NULL)
return list1;
for(temp=list1;temp->next!=NULL;temp=temp->next);
temp->next=list2;
return list1;
}


int main()
{
struct node *list1=NULL,*list2=NULL,*list3=NULL;
int ch,pos,num;
do{
printf("\n1-create \n 2-disp\n3-count\n4-concat");
printf("\n enter choice");
scanf("%d",&ch);
switch(ch)
{
case 1:list1=create(list1);
list2=create(list2);
break;
case 2:disp(list1);
printf("\nsecond list");
break;
case 3:count(list1);
break;
case 4:list3=concat(list1,list2);
disp(list3);
break;
}
}while(ch<5);
getch();
return 0;
}