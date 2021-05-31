#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    int l1=0,l2=0;
    scanf("%s",&str1);
    scanf("%s",&str2);
   
for(int i=0;str1[i]!='\0';i++)
{
    l1+=1;
}
for(int i=0;str2[i]!='\0';i++)
{
    l2+=1;
}
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