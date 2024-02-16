#include <stdio.h>
int main (){
     int i,j,arr[50],t,n;
     printf("enter the size of the array number");
     scanf("%d",&n);
     printf("enter the elements");
     for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
     for(i=0;i<n-1;i++){
     for(j=0;j<n-i-1;j++){
     if(arr[j]>arr[j+1]){
        t=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=t;
     }
     }
     }
     printf("after sorting the numbers : ");
     for(i=0;i<n;i++){
        printf("%d      ",arr[i]);
     }
}
