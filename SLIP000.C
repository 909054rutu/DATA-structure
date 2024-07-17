#include<stdio.h>
#include<conio.h>
int main()
{
int t,i,n,num,j,a[100];
clrscr();
printf("enter limit");
scanf("%d",&n);
printf("\n enter value");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
num=a[i];
for(j=i-1;j>0&&num<a[j];j--)
{
t=a[j+1];
a[j+1]=a[j];
a[j]=t;
}
}
printf("\n displya");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
getch();
return 0;
}