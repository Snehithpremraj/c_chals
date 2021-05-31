#include<stdio.h>
void main()
{
int a,b,c,n,x=0;
scanf("%d %d %d %d",&n,&a,&b,&c);
for(int i=0;i<n;i++)
{
    if(a>=b && a>=c)
    {    
     x=x+a;
    if(a>=1){
    a=a-1;
    }
    }
    else if(b>=a && b>=c)
    {
     x=x+b;
     if(b>=1)
     {
     b=b-1;
     }
    }   
    else
    {
     x=x+c;
     if(c>=1)
{     c=c-1;
}
    }
}
printf("%d",x);
}