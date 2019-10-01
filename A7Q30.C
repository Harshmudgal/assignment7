#include<stdio.h>
#include<math.h>
void main()
{
	int x,n;
	printf("Enter the number and print digits after decimal");
	scanf("%d%d",&x,&n);
	x=x+pow(10,n)*17;
	float y=x%pow(10,n);
	x=x/pow(10,n);
	printf("\n%d%d",x,y);
	}
