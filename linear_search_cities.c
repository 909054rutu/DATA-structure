#include<stdio.h>
#include<string.h>
void search(char s1[20][20],int n)
{
	int flag=0,i;
	char str[20];
	printf("Enter city to search:");
	scanf("%s",&str);
	for(i=0;i<n;i++)
	{
		if(strcmp(s1[i],str)==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("%s City is present in array",str);
	else
		printf("%s City is not present in array",str-);
}
int main()
{
	char s1[20][20];
	int i,n;
	printf("Enter limit: ");
	scanf("%d",&n);
	printf("Enter n cities: ");
	for(i=0;i<n;i++)
		scanf("%s",&s1[i]);
	search(s1,n);
}
