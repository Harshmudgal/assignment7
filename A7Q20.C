#include<stdio.h>
void main()
{
	int n,m,sum=0;
	printf("Enter tot grps and no inside then");
	scanf("%d%d",&n,&m);
	for(int i=0;i<n*m;i++)
	{
		int a;
		scanf("%d%",&a);
		sum=sum+a;
		}
		printf("%d",sum);
		}

