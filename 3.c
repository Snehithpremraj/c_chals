#include<stdio.h>
void sort(int *,int);
int main()
{
    int arr[20],n;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
}
void sort(int *ptr,int n)
{   int tmp;
    for(int i=0;i<n;i++)
    {   for(int j=i+1;j<n;j++)
    {   if(ptr[i]>ptr[j])
        {
            tmp=ptr[i];
            ptr[i]=ptr[j];
            ptr[j]=tmp;
        }

    }
        
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",ptr[i]);
    }

}