#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter the number ");
	scanf("%d%d",&x,&y);
	printf("\n");
	if(x==0)
	{
		if(y==0)
		printf("0");
		else
		printf("%di",y);
		}
	 else
	 {
		if(y==0)
		printf("%d",x);
		else
		printf("%d+(%d)i",x,y);
		}
		}
