#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[40][40],s[40];
    int i,j,n;
    printf("enter number of students :");
    scanf("%d",&n);
    printf("enter names of stdudents :");
    for(i=0;i<n;i++)
    {
        scanf(" %[^\n]",name[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(name[j],name[j+1])>0)
            {
                strcpy(s,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],s);
            }
        }
    }

    for(i=0;i<n;i++)
        printf("%d \t%s\n",i+1,name[i]);
}