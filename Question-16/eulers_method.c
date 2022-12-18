#include <stdio.h> 
#include <math.h> 
#define f(x,y) (y-x)/(y+x); 

int main () 
{
    int n,i=1;
    float xi,yi,x,y,h; 
    printf("Enter the value of n : ");
    scanf("%d",&n);
	printf("\nEnter the initial condition for x and y :  "); 
	scanf("%f%f",&xi,&yi); 
	printf("\nEnter the value of x for which y is needed : "); 
	scanf("%f",&x); 
	h=(x-xi)/n; 
	while (xi<x) 
	{
		y=yi+h*f(xi,yi); 
		yi=y; 
		xi=xi+h; 
		printf("x%d = %.4f\ty%d = %.4f\n",i,xi,i,yi);
		i++;
	}
	printf("\nValue of y%d is: %f\n",i,y); 
	return 0; 
}