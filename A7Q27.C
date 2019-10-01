#include<stdio.h>
#include<math.h>
void main()
{
	int x;
	printf("Enter the number");
	scanf("%d",&x);
	while(x>0)
	{       int y=x%10;
		if(y%2==0)
		{
			printf("%d",y);
			break;
			}
			x=x/10;
			}
			}
