#include<stdio.h>
int main()
{
	int a[100],i,n,num,flag=0,top,bottom,mid;
	printf("Enter limit: ");
	scanf("%d",&n);
	printf("Enter n numbers: ");
	for(i=0;i<n;i++)
		scanf("%s",&a[i]);
	printf("Enter number to search:");
	scanf("%d",&num);
	top=0;
	bottom=n-1;
	while(top<=bottom)
	{
		mid=(top+bottom)/2;
		if(a[mid]==num)
		{
			flag=1;
			break;
		}
		if(num>a[mid])
			top=mid+1;
		else
			bottom=mid-1;
	}
	if(flag==1)
		printf("number found");
	else
		printf("Number not found");
}
