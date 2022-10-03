#include <stdio.h>
#include <math.h>

double cal(double x, double a, double b, double c, double d)
{
    return pow(x, 3) * a + pow(x, 2) * b + pow(x, 1) * c + d;
}
int main()
{
    double a, b, c, d;
    double z = 0;
    printf("Enter the value of a,b,c,d:\n");
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

    // printf("reading done");
    double x = 0, y = 1;
    int count = 0, cnt = 0;
    while (count < 3)
    {
        double fx1 = cal(x, a, b, c, d);
        double fx2 = cal(y, a, b, c, d);

        

        if (fx1 * fx2 < 0)
        {
            
            z = (x + y) / 2.0;

            double fx3 = cal(z, a, b, c, d);

            if (fx3 == 0.0)
            {
                break;
            }

            if (fx1 * fx3 < 0)
            {
                y = z;
            }
            else if (fx3 * fx2 < 0)
            {
                x = z;
            }
            count++;
        }
        else
        {
            x = y;
            y++;
        }
    }
    printf("Answer : %.4lf", z);
}