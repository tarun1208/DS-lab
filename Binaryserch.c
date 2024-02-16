#include<stdio.h>
int main()
{
    int a[50],i,n,pos=-1,key,mid,start,end;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    start=0;
    end=n-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(key==a[mid])
        {
            printf("key is found=%d",mid+1);
            pos=mid+1;
            break;
        }
        else if(key<=a[mid])
        end=mid-1;
        else
        start=mid+1;
    }
    if(pos==-1)
    {
        printf("key is not found");
    }
}
