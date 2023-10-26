#include <stdio.h>
int main(void)
{
    
    int n,c[50],i,j,temp,num,top,bot,mid;
    printf("enter value of n ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter numbers ");
        scanf("%d",&c[i]);
    }

    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
        {
            if(c[j]>c[j+1])
            {
                temp=c[j+1];
                c[j+1]=c[j];
                c[j]=temp;
            }
        }

    printf("enter number to be searched ");
    scanf("%d",&num);
    top=0,bot=n-1;
    while(top<=bot)
    {
        mid=(top+bot)/2;

        if(c[mid]==num)
        {
            printf("present in position %d\n",mid);
            break;
        }
        else if(c[mid]>num)
        {
            bot=mid-1;
        }
        else
        {
            top=mid+1;
        }   
    }
    if(top>bot)
        printf("not found\n");
}