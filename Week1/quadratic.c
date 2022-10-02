#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double a,b,c;
    printf("Enter the values of a,b,c: ");
    scanf("%lf%lf%lf",&a,&b,&c);
     if (a == 0) {
        printf("Invalid Equation");
    }
    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));
 
    if (d > 0) {
        printf("Roots are real and distinct \n");
        printf("%f\n%f", (double)(-b + sqrt_val) / (2 * a),
               (double)(-b - sqrt_val) / (2 * a));
    }
    else if (d == 0) {
        printf("Roots are real and equal \n");
        printf("%f", -(double)b / (2 * a));
    }
    else
    {
        printf("Roots are imaginary \n");
        printf("%f + i%f\n%f - i%f", -(double)b / (2 * a),
               sqrt_val / (2 * a), -(double)b / (2 * a),
               sqrt_val / (2 * a));
    }
}