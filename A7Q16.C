#include<stdio.h>
void main()
{
	int n,sum=0;
	printf("Enter the total number");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int x;
		char a;
		if(i==n-1)
		{
		printf("\nEnter the numbers");
		scanf("%d",&x);
		}
		else
		{
		printf("\nEnter the numbers");
		scanf("%d%c",&x,a);
		}
		sum=sum+x;
		}
		printf("\n the sum is %d",sum);

		}