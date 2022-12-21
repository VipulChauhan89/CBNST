// Write a program in “C” Language to integrate numerically using Simpson’s 1/3 Rule.
#include<stdio.h>
#define f(x) 1/(1+x*x)
int main()
{
	int n,position_of_term=1;
	float i,a,b,sum=0,h;
	printf("Enter the value of a and b : ");
	scanf("%f%f",&a,&b);
	printf("Enter the number of intervals : ");
	scanf("%d",&n);
	h=(b-a)/n;
	sum=f(a)+f(b);
	for(i=a+h;i<b;i+=h)
	{
		sum+=(position_of_term%2==0)?2*f(i):4*f(i);
		position_of_term++;
	}
	sum=(h*sum)/3;
	printf("\nValue of the integral = %f\n",sum);
	return 0;
}