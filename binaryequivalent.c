#include <stdio.h>
int main(void)
{
    int a,bin,c[50],i=0;
    printf("enter decimal number ");
    scanf("%d",&a);
    if(a==0)
        printf("binary number = 0");
    else
    {
        printf("binary number = ");
        while(a>0)
        {
            c[i]=a%2;
            a=a/2;
            i=i+1;
        }
        for(int j=i-1;j>=0;j--)
        {
            printf("%d",c[j]);
        }
    }
}