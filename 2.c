#include<stdio.h>
int main()
{   int n,a,b,c,total=0;
    scanf("%d %d %d %d",&n,&a,&b,&c);
    for(int i=0;i<n;i++)
    {
        total=total+a;
        a=a-1;
    }
    printf("%d",total);


    return 0;
}