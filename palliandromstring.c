#include <stdio.h>
int main(void)
{
    int palli=1,i=0,j=0,k;
    char s[30];
    printf("enter a string ");
    scanf("%[^\n]",s);
    while(s[i]!='\0')
    {
        j=j+1;
        i=i+1;
    }
    i=0;
    k=j-1;
    while(s[i]!='\0')
    {
        if(s[i]!=s[k])
        {
            palli=0;
            break;
        }
        else
        {
            i++;
            k--;
        }
    }
    if(palli)
    {
        printf("palliandrome\n");
    }
    else
    {
        printf("not palliandrome\n");
    }
}