#include<stdio.h>
#include<math.h>
void main()
{
	int n,sum=0;
	printf("Enter the tot numb er");
	scanf("%d",&n);
	int x;
	printf("Enter the numbers");
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x);
		sum=sum+pow(x,i+1);
		}
		for(int i=


