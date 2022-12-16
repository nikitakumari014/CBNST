#include<math.h>
#include<stdio.h>
double f(double x)
{
    return x - cos(x);
}
int main()
{
 double a,b,c;
 printf("Enter the starting assumption of a and b : ");
    scanf("%lf%lf", &a, &b);
    for(int i=1;i<=20;i++)
    {
        c = (a+b)/2;
        printf("Iteration %2d, value of c = %lf\n", i, c);
        if(f(a) * f(c) < 0)
        b = c;
        else if(f(b) * f(c) < 0)
        a = c;

    }
    printf("Root = %.4lf", c);
}
