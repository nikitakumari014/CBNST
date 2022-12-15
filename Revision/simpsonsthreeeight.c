#include <stdio.h>
#include <math.h>
double f(double x)
{
    return exp(x) / (1+x);
}
double simpsonthreebyeight(int n, double a, double b)
{

    double h = (b - a) / n;
    double multiples_of_3 = 0, remaining = 0;
    for (int i = 1; i < n; i++)
    {
        if (i % 3 == 0)
            multiples_of_3 += f(a + i * h);
        else
            remaining += f(a + i * h);
    }
    return 3 * h / 8 * (f(a) + f(b) + 3 * remaining + 2 * multiples_of_3);
}
int main()
{
    double a = 0, b = 6;
    const int n = 6;
    printf("Answer : %lf", simpsonthreebyeight(n, a, b));
    return 0;
}