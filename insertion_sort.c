#include<stdio.h>
void insertion_sort(int a[100],int n)
{
	int num,i,j,t;
	for(i=1;i<n;i++)
		{
	num=a[i];
for(j=i-1; j>=0&&a[j]>num; j--)
	{
     	t=a[j+1];
	a[j+1]=a[j];
	a[j]=t;
	}
		}
	printf("Insertion sorted numbers=");
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);
}
int main()
{
	int a[100],i,n;
	printf("Enter limit: ");
	scanf("%d",&n);
	printf("Enter n numbers: ");
	for(i=0;i<n;i++)
               scanf("%d",&a[i]);
	insertion_sort(a,n);
}
