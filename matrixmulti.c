#include <stdio.h>
int main(void)
{
    int i,j,m,n,p,q,a[10][10],b[10][10],c[10][10],k;
    printf("enter value of m and n ");
    scanf("%d %d",&m,&n);
    printf("enter value of p and q ");
    scanf("%d %d",&p,&q);
    printf("enter elements of matrix  A \n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements of matrix  B\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf(" %d",&b[i][j]);
        }
    }

    if(n==p)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                for(k=0;k<=n-1;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d",c[i][j]);
                printf(" ");
            }
            printf("\n");
        }
    }
    else
        printf("multiplication not possible \n");

    
}