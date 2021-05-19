#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    int l1,l2;
    scanf("%s",&str1);
    scanf("%s",&str2);
    l1=strlen(str1);
    l2=strlen(str2);
    if(l1>l2)
    {
        printf("\n First");
    }
    else if(l2>l1)
    {
        printf("\nSecond");
    }
    else
    {
        printf("\nEqual");
    }
    return 0;
}