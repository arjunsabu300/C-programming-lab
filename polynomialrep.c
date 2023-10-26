#include <stdio.h>
struct poly
{
    float coeff;
    int exp;
}p[10],q[10],r[10];
int main(void)
{
    float a;
    int b,c,n,m,i,j,k;
    printf("enter the degree of equation 1 : ");
    scanf("%d",&m);
    for(i=0;i<=m;i++)
    {
        printf("enter the coefficient x^%d: ",i);
        scanf("%f",&a);
        p[i].coeff=a;
        p[i].exp=i;
   }
   printf("enter the degree of equation 2 : ");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {    
        printf("enter the coefficient x^%d: ",i);
        scanf("%f",&a);
        q[i].coeff=a;
        q[i].exp=i;
    }
    i=0;j=0;k=0;
    while(i<=m && j<=n)
    {
        if(p[i].exp==q[j].exp)
        {
            r[k].coeff=p[i].coeff+q[j].coeff;
            r[k].exp=p[i].exp;
            k++;i++;j++;
        }
        else if(p[i].exp>q[j].exp)
        {
            r[k].coeff=p[i].coeff;
            r[k].exp=p[i].exp;
            k++;i++;
        }
        else if(p[i].exp<q[j].exp)
        {
            r[k].coeff=q[j].coeff;
            r[k].exp=q[j].exp;
            k++;j++;
        }
    }
    while(i<=m)
    {
        r[k].coeff=p[i].coeff;
        r[k].exp=p[i].exp;
        k++;i++;
    }
    while(j<=n)
    {
        r[k].coeff=q[j].coeff;
        r[k].exp=q[j].exp;
        k++;j++;
    }
    for(i=k-1;i>=0;i--)
    {
        printf("%.2fx^%d ",r[i].coeff,r[i].exp);
    }
}