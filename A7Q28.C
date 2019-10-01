#include<stdio.h>
void main()
{
	int n,sum1=0,x,y,sum2=0;
	printf("Enter n");
	scanf("%d",&n);
	printf("Enter the numbers in x+iy format ");
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&x,&y);
		sum1+=x;
		sum2+=y;
		}
		printf("The sum is %d+i%d",sum1,sum2);
		}

