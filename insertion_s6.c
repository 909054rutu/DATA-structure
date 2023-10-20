#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n,t,a[100],num;
printf("enter limit");
scanf("%d",&n);
printf("enter values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
num=a[i];
for(j=i-1;j>=0&&num<a[j];j--)
{
t=a[j+1];
a[j+1]=a[j];
a[j]=t;
}
}
printf("sorted element");
for(i=0;i<n;i++)
printf("%d",a[i]);
getch();
return 0;
}