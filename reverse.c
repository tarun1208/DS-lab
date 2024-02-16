#include<stdio.h>
int main()
{
             int arr[100],n;
             printf("enter the size of the array:");
             scanf("%d",&n);
             printf("enter an array:");
             for(int i=0;i<n;i++)
             {
                 scanf("%d",&arr[i]);
             }
               printf("reversed array:");
               for(int i=n-1;i>=0;i--)
               {
                    printf("%d\t",arr[i]);
                }
                return 0;
 }
   
