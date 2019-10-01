#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	int x=n/100;
	int z=n-(x*100);
	z=z/10;
	printf("\n the digit is %d",z);

	}
