#include <stdio.h>
int main(void)
{
    int m,n,i,j,a[30][30],lar,seclar,small=a[0][0];
    printf("Enter rows(m) and columns(n) of matrix A ");
    scanf("%d%d",&m,&n);
    printf("enter elements of matrix A \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]<small)
            {
                small=a[i][j];
            }
        }
    }
    lar=a[0][0];
    seclar=small;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>lar)
            {
                seclar=lar;
                lar=a[i][j];
            }
            if(a[i][j]>seclar && a[i][j]<lar)
            {
                seclar=a[i][j];
            }
        }
    }
    printf("%d is the largest element\n",lar);
    printf("%d is the second largest element\n",seclar);
}