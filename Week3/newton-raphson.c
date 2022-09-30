#include <stdio.h>
#include <math.h>
float f(float x)
{
    return pow(x, 2) - 5;
}
float derivative(float x)
{
    return 2 * x;
}
int main()
{
    float x;                 // approximation
    unsigned short i = 1, n; // number of iterations
    printf("First approximation: ");
    scanf("%f", &x);
    printf("Number of iterations: ");
    scanf("%hu", &n);
    while (i <= n)
    {
        x = x - f(x) / derivative(x);
        i++;
    }
    printf("Approximation root: %f \n", x);
    return 0;
}
