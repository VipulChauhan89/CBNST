// Write a program in "C" Language To deduce error involved in polynomial equation 
#include<stdio.h>
#include<math.h>
int main()
{
    float t_val,a_val,abs_err,rel_err,per_err;
    printf("Enter the true value : ");
    scanf("%f",&t_val);
    printf("Enter the approximate value : ");
    scanf("%f",&a_val);
    abs_err=t_val-a_val;
    abs_err=fabs(abs_err);
    rel_err=abs_err/t_val;
    per_err=rel_err*100;
    printf("Absolute Error = %f\n",abs_err);
    printf("Relative Error = %f\n",rel_err);
    printf("Percentage Error = %f\n",per_err);
    return 0;
}

