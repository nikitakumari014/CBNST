#include<stdio.h>
#include<math.h>
int N;
const int max_iter = 20;
struct equation
{
    int coeff;
    int power;
};
double func(struct equation equ[],double x)
{
    double res = 0;
    for(int i=0;i<N;i++)
    res += equ[i].coeff * pow(x,equ[i].power);
    return res;
}
int main(){
printf("Enter the number of terms in the equation: ");
scanf("%d",&N);
struct equation equ[N];
 printf("Enter each term coeff followed by its power: \n");
 for(int i=0;i<N;i++)
 {
    printf("Term %d: ",i);
    scanf("%d%d",&equ[i].coeff,&equ[i].power);
 }
 int decimals;
 double a,b,c,e,error;
 printf("Enter the starting assumption of a and b: ");
 scanf("%lf%lf",&a,&b);
 printf("Enter decimal places: ");
 scanf("%d",&decimals);
 error = decimals / (pow(10,decimals) * decimals);
 //calculating the answer
 for(int i= 0;i<=max_iter;++i)
 {
    c = (a+b)/2;
    printf("Iteratoin %2.2d, value of c = %lf\n", i, c);
    if(fabs(e-c) < error)
    {
        printf("After %2.2d iterations, root = %.*lf\n", i + 1, decimals, c);
            return 0;
    }
    if(func(equ,a)*func(equ,c) < 0)
    b = c;
    else if(func(equ,b)*func(equ,c) < 0)
    a = c;
    e = c;
 }
  printf("\nRoot = %.*lf", decimals, c);
    return 0;

}