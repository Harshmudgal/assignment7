#include<stdio.h>
#include<math.h>
void main()
{
	int n,m;
	printf("Enter numbers");
	scanf("%d%d",&n,&m);
	int c=0,d=0;
	int y=n;
	while(y>=0)
	{
		y=y/10;
		c++;
		}
	y=m;
	while(y>=0)
	{
		y=y/10;
		d++;
		}
	int a=n/pow(10,(c-1));
	int b=m/pow(10,(d-1));
	int prod=a*b;
	printf"\n%d",prod);
	}
