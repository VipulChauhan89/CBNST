#include<stdio.h>
#include<math.h>
#define f(x) (x*exp(x))- cos(x)
int main()
{
	float x0,x1,x2,f0,f1,f2,e;
	int i=0;
	printf("Enter the value of x0 : ");
	scanf("%f",&x0);
	printf("Enter the value of x1 : ");
	scanf("%f",&x1);
	printf("Enter the allowed error : ");
	scanf("%f",&e);
	do
	{
		f0=f(x0);
		f1=f(x1);
		if(f0==f1)
		{
			printf("Method failed. ");
			return 0;
		}
		x2=x1-(((x1-x0)/(f1-f0))*f1);
		i++;
		printf("No of iteration = %d and Root = %f\n",i,x2);
		x0=x1;
		x1=x2;
		f2=f(x2);
	}while(fabs(f2)>e);
	printf("\nFinal root after %d iteration = %f\n",i,x2);
	return 0;
}