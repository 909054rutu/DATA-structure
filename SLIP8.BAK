#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],i,j,n,t,num;
printf("enter limit");
scanf("%d",&n);
printf("\n enter value");
for(i=0;i<n;i++)
scanf("\t%d",&a[i]);
{
for(i=1;i<n;i++)
{
for(j=i-1;j>0&&num<a[j];j--)

{
t=a[j+1];
a[j+1]=a[j];
a[j]=t;
}
}
}
printf("sorted element");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
getch();
return 0;

}
