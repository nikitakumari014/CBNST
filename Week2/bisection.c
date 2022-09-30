#include <stdio.h>
#include <math.h>

float cal(float x, int a, int b, int c, int d)
{
    return pow(x, 3) * a + pow(x, 2) * b + pow(x, 1) * c + d;
}
int main()
{
    int a, b, c, d;
    float z = 0;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    // printf("reading done");
    float x = 0, y = 1;
    int count = 0, cnt = 0;
    while (count < 3)
    {
        float fx1 = cal(x, a, b, c, d);
        float fx2 = cal(y, a, b, c, d);

        // printf("fx1 : %.2f, fx2 : %.2f\n",fx1,fx2);

        if (fx1 * fx2 < 0)
        {
            // printf("Inside if");
            z = (x + y) / 2.0;

            float fx3 = cal(z, a, b, c, d);
            // printf("value of fx3 : %.2f\n",fx3);

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

    printf("%.2f", z);
}