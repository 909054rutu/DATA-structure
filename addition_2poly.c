#include<stdio.h>
#include<math.h>
struct poli
{
    int coeff;
    int pow;
}p1[50],p2[50],p3[50];

int main()
{
    int i,n,k=0,l=0,m=0;
    printf("\n enter limit=");
    scanf("%d",&n);
    //accept poly
    for(i=0;i<n;i++)
    {
        printf("enter coefficient");
        scanf("%d",&p1[i].coeff);
        printf("enter power=");
        scanf("%d",&p1[i].pow);
        
    }
    printf("Enter second poly:");
    for(i=0;i<n;i++)
    {
        printf("enter coefficient :");
        scanf("%d",&p2[i].coeff);
        printf("enter power=");
        scanf("%d",&p2[i].pow);
    }
printf("\n First:");
    for(i=0;i<n;i++)
    {
        printf("%d ^%d+ ",p1[i].coeff,p1[i].pow);
    }
printf("\n Second:");
    for(i=0;i<n;i++)
    {
        printf("%d ^%d+ ",p2[i].coeff,p2[i].pow);
    }
    
        for(i=0;i<n;i++)
        {
        	if(p1[i].pow==p2[i].pow)
        	{
             p3[m].coeff=p1[i].coeff+p2[i].coeff;
             p3[m].pow=p1[i].pow;
             m++;
            }
            else
            {
            	if(p1[i].pow<p2[i].pow)
            	{
            		p3[m].coeff=p1[i].coeff;
            		p3[m].pow=p1[i].pow;
            		m++;
				}
				else
				{
				    p3[m].coeff=p2[i].coeff;
            		p3[m].pow=p2[i].pow;
            		m++;
				}
			}
        }
    printf("\n Add=");
    for(i=0;i<m;i++)
    {
    	printf("%d ^%d+ ",p3[i].coeff,p3[i].pow);
	}
}
