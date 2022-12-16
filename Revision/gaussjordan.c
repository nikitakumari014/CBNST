#include<stdio.h>
#include<math.h>
#define max_size 20
int main()
{
        int i,j,k,n;
        float m[max_size][max_size] , c,sum=0.0, x[max_size];
        printf("Enter the order of matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of augmented matrix row-wise:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (n + 1); j++) {
            scanf("%f", &m[i][j]);
        }
    }
    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=n;i++)
        {
            if(i!=j) {
            c = m[i][j] / m[j][j];
            for(int k=1;k<=(n+1);k++)
            m[i][k] = m[i][k] - c * m[j][k];
            }
        }
    }
   
    for (i = 1; i <= n; i++) {
        x[i] = m[i][n+1] / m[i][i];
        printf("%c = %.2f\n", i + 119, x[i]);
    }
    
    
}