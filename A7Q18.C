#include<stdio.h>
#include<math.h>
void main()
{
	int x;
	float sum=0;
	float sq;
	printf("Enter the tot num");
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		float a;
		scanf("%f",&a);
		sum=sum+a*a;
		}
		sq=sqrt(sum);
		printf("\n %f",sq);
		}





