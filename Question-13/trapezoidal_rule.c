// Write a program in “C” Language to integrate numerically using Trapezoidal Rule.
#include<stdio.h>
#define f(x) x*x*x
int main()
{
	int n;
	float i,a,b,sum=0,h;
	printf("Enter the value of a and b : ");
	scanf("%f%f",&a,&b);
	printf("Enter the number of intervals : ");
	scanf("%d",&n);
	h=(b-a)/n;
	sum=f(a)+f(b);
	for(i=a+h;i<b;i+=h)
	{
		sum+=2*f(i);
	}
	sum=(h*sum)/2;
	printf("\nValue of the integral = %f\n",sum);
	return 0;
}