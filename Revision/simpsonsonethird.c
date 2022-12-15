#include <stdio.h>
#include <math.h>
double f(double x)
{
    return 1 / (1 + x * x);
}
double simpsononethird(int n, double a, double b)
{

    double h = (b - a) / n;
    double odd = 0, even = 0;
    for (int i = 1; i < n; i++)
    {
        if (i & 1)
            odd += f(a + i * h);
        else
            even += f(a + i * h);
    }
    return h / 3 * (f(a) + f(b) + 4 * odd + 2 * even);
}
int main()
{
    double a = 0.0, b = 6.0;
    const int n = 6;
    printf("Answer : %lf", simpsononethird(n, a, b));
    return 0;
}