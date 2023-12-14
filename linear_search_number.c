
#include<stdio.h>
void inserction(int a[100],int n)
{
int i,j,t,num;
for(i=1;i<n;i++)
{
num=a[i];
for(j=i-1;j>0&&a[j]>num;j--)
{
t=a[j+1];
a[j+1]=a[j];
a[j]=t;
}
}
printf("\n display");
for(i=0;i<n;i++)
printf("%d",a[i]);
}

int main()
{
int a[100],i,n;
printf("enter limit");
scanf("%d",&n);
printf("\n disp");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
inserction(a,n);
getch();
return 0;
}
