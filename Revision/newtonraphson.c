#include<stdio.h>
#include<math.h>
double f(double x)
{
    return 3*x - cos(x) - 1;
}
double df(double x)
{
    return 3 + sin(x);
}
int main()
{
    double x0,h,error;
    int max_iter , decimals;
    printf("Enter the value of x0 : ");
    scanf("%lf", &x0);
    printf("Enter decimal places and maximum iterations : ");
    scanf("%d%d", &decimals, &max_iter);
    // calculations
    for(int i=0;i<max_iter;i++)
    {
        h = f(x0) / df(x0);
        printf("Iteration %2.2d, x = %lf\n", i, x0);
        if(fabs(h) < error)
        {
            printf("After %2.2d iterations, root = %.*lf\n", i + 1, decimals, x0);
            return 0;
        }
        x0 -= h;
    }
    printf("The required solution does not converge or iterations are insufficient.\n");
    return 1;
}