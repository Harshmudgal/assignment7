#include<stdio.h>
void main()
{
	int n,sum=0;
	printf("Enter the total number");
	scanf("%d",&n);
	for(int j=0;j<n;j++)
	{
		char c;
		printf("Enter the colon");
		scanf("%c",&c);
		}
	for(int i=0;i<n;i++)
	{
		int x;
		char a;
		printf("\nEnter the numbers");
		scanf("%d%c",&x,&a);

		sum=sum+x;
		}
		printf("\n the sum is %d",sum);

		}