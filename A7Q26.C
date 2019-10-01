#include<stdio.h>
#include<math.h>

void main()
{
	int k,x;
	printf("Enter k and x");
	scanf("%d%d",&k,&x);
	int c=0;
	int y=x;
	while(y>0)
	{
		y=y/10;
		c++;
		}
	int q=c-k;
	x=x/pow(10,q);
	x=x%10;
	printf("%d",x);

	}



