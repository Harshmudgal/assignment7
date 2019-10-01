 #include<stdio.h>
 #include<math.h>
 void main()
 {
	float a,b,c;
	printf("Enter the equation");
	scanf("%f%f%f",&a,&b,&c);
	float d=b*b-4*a*c;
	if(d<0)
	{
		float x=-b/(2*a);
		float y=sqrt(-d);
		printf("The roots are %f+%fi and %f-%fi",x,y,x,y);
		}
	 else
	 {
		float y=sqrt(d);
		float x=(-b+y)/2*a;
		float z=(-b-y)/2*a;
		printf("The roots are %f and %f",x,z);
		}
		}
