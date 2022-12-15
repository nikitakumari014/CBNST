#include<stdio.h>
#include<string.h>
#define max_size 10
void generatetable(double y[max_size][max_size],int);
int fact(int);
int main()
{
   int n;
   printf("Enter the number of values: ");
   scanf("%d",&n);
   double x[max_size],y[max_size][max_size],p,xp,sum;
   memset(y,0,sizeof(y));
   printf("Enter the values row-wise:\n");
   for(int i=0;i<n;i++)
   {
    scanf("%lf%lf",&x[i],&y[i][0]);
   }
   printf("Enter xp: ");
   scanf("%lf",&xp);
   p = (xp - x[n-1]) / (x[1] - x[0]);
   sum = y[n-1][0];
   generatetable(y,n);
   // calculate answer
   double res = 1;
   for(int i=1;i<n;i++)
   {
    res = res * (p+i-1);
    sum += (res) / fact(i) * y[n-1][i];
   }
   printf("f(%0.lf) = %lf",xp,sum);

}
void generatetable(double y[max_size][max_size],int n)
{
    for(int j=1;j<n;j++)
    {
        for(int i=j;i<n;i++)
        y[i][j] = y[i][j-1] - y[i-1][j-1];
    }
}
int fact(int n)
{
    int f = 1;
    for(int i=2;i<=n;i++)
    f *= i;
    return f;
}