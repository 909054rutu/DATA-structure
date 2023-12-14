#include<stdio.h>
void bubble_sort(int a[100],int n)
{
	int num,i,pass,t;
	for(pass=1;pass<n;pass++)
		{
			for(i=0;i<(n-pass);i++)
			{
				if(a[i]>a[i+1])
				{
					t=a[i];
					a[i]=a[i+1];
					a[i+1]=t;
				}
			}
		}
	printf("bubble sorted numbers=");
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
	bubble_sort(a,n);
}
