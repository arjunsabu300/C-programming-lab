#include <stdio.h>
int main(void)
{
    int a,b,c=0,d=0;
    printf("enter a number : ");
    scanf("%d",&a);
    while(a)
    {
        b=a%10;
        a=a/10;
        c=c+b;
        d=(d*10)+b;
        
    }
    printf("reversed number = %d",d);
    printf("\nsum = %d",c);
}