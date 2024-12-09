#include<stdio.h>
int main()
{
    int a[10],i,n,key,pos=0;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            printf("key found on position=%d\n",i+1);
            pos++;
            break;
            
        }
    }
    if(pos==1)
    {
        printf("element is found");
    }
    else
    {
        printf("element is not found");
    }
}
