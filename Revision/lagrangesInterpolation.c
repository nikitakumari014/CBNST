#include <stdio.h>
#define max_size 10
double lagrange(double x[max_size], double y[max_size], double value, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        double prod = y[i];
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                prod = prod * (value - x[j]) / (x[i] - x[j]);
            }
        }
        sum += prod;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);
    double x[max_size], y[max_size], x0;
    printf("Enter the values for x and y:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%lf  %lf", &x[i], &y[i]);
    }
    printf("Enter the value for x0: ");
    scanf("%lf", &x0);
    printf("Answer: %lf", lagrange(x, y, x0, n));
    return 0;
}