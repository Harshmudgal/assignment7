#include<stdio.h>
void main()
{
	int n,m,sum=0,prod=0;
	printf("Enter tot grps and no inside then");
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{       prod=1;
		for(int j=0;j<m;j++)
		{       int a;
			scanf("%d",&a);
			prod=prod*a;
			}
			sum=sum+prod;
			}
			printf("%d",sum);
			}

