#include<stdio.h>
#define MAX 5
struct queue
{
	int data[MAX];
	int front,rear;
}*q;
void init()
{
	q->front=-1;
	q->rear=-1;
}
int isempty()
{
	if(q->front==-1 || q->front>q->rear)
	return 1;
	else
	return 0;
}
int isfull()
{
	if(q->rear==MAX-1)
	return 1;
	else
	return 0;
}
void insert(int num)
{
	if(isfull())
	{
		printf("Queue is overflow...");
	}
	else
	{
		if(q->front==-1)
			q->front=0;
			
			q->rear++;
			q->data[q->rear]=num;
			printf("\nInsert succ...");
	}
}
void deleteq()
{
	int val;
	if(isempty())
		printf("\nQueue is underflow...");
	else
	{
		val=q->data[q->front];
		q->front++;
		printf("\nDeleted value=%d",val);
	}
}
void disp()
{
	int i;
	for(i=q->front;i<=q->rear;i++)
	{
		printf("%d\t",q->data[i]);
	}
}
int main()
{
	int ch,num;
	init();
	do
	{
		printf("\n1-insert \n2-del \n3-disp:");
		printf("\nEnter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter number:");
					scanf("%d",&num);
					insert(num);
					break;
			case 2:deleteq();
					break;
			case 3:disp();
					break;
			default:printf("Invalid choice...");
		}
	}while(ch<4);
}

