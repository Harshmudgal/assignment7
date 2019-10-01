#include<stdio.h>
void main()
{
	int x,y,a,b;
	printf("Enter the numbers");
	scanf("%d%d%d%d",x,y,a,b);
	int q=x*y-a*b;
	int w=x*b+a*y;
	printf("The multiplication is %d+%di",q,w);
	}

