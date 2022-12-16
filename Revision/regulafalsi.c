#include<stdio.h>
#include<math.h>
double f(double x)
{
    return x*exp(x) - cos(x);
}
double formula(double a,double b)
{
    return (a * f(b) - b*f(a) ) / (f(b) - f(a));
}
int main()
{
   int max_iter,decimals;
   double a,b,c,e = 0.0;
   printf("Enter value of a, b, decimal places and maximum iterations : ");
    scanf("%lf%lf%d%d", &a, &b, &decimals, &max_iter);
    double error = decimals / (pow(10,decimals) * decimals);
    for(int i=0;i<max_iter;++i)
    {
        c = formula(a,b);
        printf("Iteration %2.2d, c = %lf\n", i, c);
        if(fabs(e-c) < error)
        {
             printf("After %2d iterations, root = %.*lf\n", i + 1, decimals, c);
            return 0;
        }
        if(f(a)*f(c) < 0)
        b = c;
        else if(f(b) * f(c) < 0)
        a = c;
        e = c;
    }
    printf("The required solution does not converge or iterations are insufficient.\n");
    return 1;
}