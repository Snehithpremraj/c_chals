#include<stdio.h>
int main()
{
    int a[20];
    int n;
    float s=0;;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    int c=n;
    float avg;
    avg=s/c;

    while(avg<9.5)
    {
        s=s+10;
        c=c+1;
        avg=s/c;
    }
    int final=c-n;
    printf("%d",final);
    return 0;
}