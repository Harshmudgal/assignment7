#include<stdio.h>
void main()
{
	int n     ;
	printf("Enter the total pairs");
	scanf("%d",&n);
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		sum=sum+(a*b);
		}
		printf("\n%d",sum);
		}
