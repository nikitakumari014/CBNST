#include<stdio.h>
double f(double x,double y)
{
    return  ((y*y) - (x*x)) /  ((y*y) + (x*x));
}
double rungekutta(double x0, double y, double x, double h)
{
  double k1,k2,k3,k4,k;
  while(x0 < x)
  {
    k1 = h * f(x0,y);
    k2 = h* f(x0+(h/2),y+(k1/2));
    k3 = h * f(x0+(h/2),y+(k2/2));
    k4 = h*f(x0+h,y+k3);
    k = 1 / 6.0 *(k1 + 2 * k2 + 2*k3 + k4);
    y += k;
    x0 += h;
  }
   return y;
}
int main()
{
    double x0,y0,x,h;
    printf("Enter x0,y0,x,h: ");
    scanf("%lf%lf%lf%lf",&x0,&y0,&x,&h);
    printf("Answer is: %lf",rungekutta(x0,y0,x,h));
    return 0;
}