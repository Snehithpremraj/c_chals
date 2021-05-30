#include<stdio.h>
int max(int []);
void sort(int *);
int main()
{   int i,n,a[4],m,s=0;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    sort(a);
    for(i=0;i<3;i++)
        printf("%d",a[i]);
    m=a[2];
    printf("\n%d",m);
    while(n!=0)
    {   for(i=0;i<3;i++)
        {if(a[i]>=m)
            {
                m=a[i];
                a[i]=a[i]-1;
            }
        s+=m;
     printf("\n%d",s);   
        }
    n--;
    }
    
   
}
void sort(int *ptr)
{   int tmp=0;
    for(int i=0;i<3;i++)
    {   for(int j=i+1;j<3;j++)
        if (ptr[i]>ptr[j])
        {
            tmp=ptr[i];
            ptr[i]=ptr[j];
            ptr[j]=tmp;
        }
    }
}