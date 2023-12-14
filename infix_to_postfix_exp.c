#include<stdio.h>
#include<ctype.h>
#define MAX 15
struct stack
{
	char data[MAX];
	int top;
}s;
void init()
{
	s.top=-1;
}
int isfull()
{
	if(s.top==MAX-1)
		return 1;
	else
		return 0;
}
int isempty()
{
	if(s.top==-1)
		return 1;
	else
		return 0;
}
void push(char ch)
{
	if(isfull())
		printf("Stak is full dont push");
	else
	{
		s.top++;
		s.data[s.top]=ch;
	}
}
char pop()
{
	char val;
	if(isempty())
		printf("Stack is empty dont pop");
	else
	{
		val=s.data[s.top];
		s.top--;
		return val;
	}
}
int priority(char x)
{
	if(x=='(')
		return 0;
	if(x=='+' || x=='-')
		return 1;
	if(x=='*' || x=='/')
		return 2;
	if(x=='^' || x=='$')
		return 3;
}
int main()
{
	char s1[20],ch;
	int i;
	printf("Enter infix expression: ");
	scanf("%s",&s1);
	init();
	printf("\nPostfix expression: ");
	for(i=0;s1[i]!='\0';i++)
	{
		if(isalpha(s1[i]))
			printf("%c",s1[i]);
		else if(s1[i]=='(')
			push(s1[i]);
		else if(s1[i]==')')
		{
			while((ch=pop())!='(')
			{
				printf("%c",ch);
			}
		}
		else
		{
			while(priority(s.data[s.top])>=priority(s1[i]))
			{
				printf("%c",pop());
			}
			push(s1[i]);
		}
	}
	while(!isempty())
	{
		printf("%c",pop());
	}
}

