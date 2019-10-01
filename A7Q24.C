#include<stdio.h>
#include<math.h>
void main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	int c=0;
	int x=n;
	while(x>=0)
	{
		x=x/10;
		c++;
		}
	int w=c-4;
	int q=pow(10,w);
	int a=n/q;
	int y=a%10;
	printf("\n%d",y);
	}
