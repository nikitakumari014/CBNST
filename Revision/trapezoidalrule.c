#include<stdio.h>
#include<math.h>
double f(double x)
{
   return exp(x*x);
}
double trapezoidal(int n,double a,double b)
{
    double h = (b-a)/n;
    double ans = (f(a) + f(b)) / 2;
    for(int i=1;i<n;i++)
    ans += f(a+i*h);
    return h*ans;

}
int main()
{
    double a= 0.0,b=2.0;
   const int n = 10;
    printf("Answer : %lf",trapezoidal(n,a,b));
    return 0;
}