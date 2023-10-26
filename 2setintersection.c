#include <stdio.h>
int main(void)
{
    int n,m,b[30],a[30],i,j,c[60],k,p;
    printf("enter value of n and m ");
    scanf("%d%d",&n,&m);

    printf("enter numbers of set A and set B\n");
    for(i=0;i<n;i++)
    {
        printf("enter numbers of A");
        scanf("%d",&a[i]);
    }
    for(j=0;j<m;j++)
    {
        printf("enter numbers of B");
        scanf("%d",&b[j]);
    }
    i=0;j=0;k=0;

    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else
        {
            printf("%d ",b[j]);
            j++;i++;
        }
    }
    /*
    while (i<n)
        printf("%d ",a[i++]);
    while (j<m)
        printf("%d ",b[j++]);
    */
}