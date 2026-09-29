#include <stdio.h>
  2 void main(){
  3     int a[5],b[5],c[10],i,j,k,temp=0;
  4     printf("\n enter 5 elements for array 1 \n");
  5     for(i=0;i<5;i++){
  6         scanf("%d",&a[i]);
  7     }
  8     for(i=0;i<4;i++){
  9      for(j=0;j<4-i;j++){
 10        if(a[j]>a[j+1]){
 11          temp=a[j];
 12          a[j]=a[j+1];
 13          a[j+1]=temp;
 14        }
 15      }
 16     }
 17     printf("\n array a = \n");
 18     for(i=0;i<5;i++){
 19         printf(" %d ",a[i]);
 20     }
 21
 22     printf("\n enter 5 elements for array 2 \n");
 23     for(i=0;i<5;i++){
 24         scanf("%d",&b[i]);
 25     }
 26     for(i=0;i<4;i++){
 27         for(j=0;j<4-i;j++){
 28             if(b[j]>b[j+1]){
 29                 temp=b[j];
 30                 b[j]=b[j+1];
 31                 b[j+1]=temp;
 32             }
 33         }
 34     }
 35     printf("\n array b = \n");
 36     for(i=0;i<5;i++){
 37         printf(" %d ",b[i]);
 38     }
 39
 40     printf("\n merged array of a and b : \n");
 41
 42     i=0;
 43     j=0;
 44     k=0;
 45
 46     while(i<5 && j<5){
 47         if(a[i]<b[j]){
 48             c[k]=a[i];
 49             k++;
 50             i++;
 51         } else{
 53             c[k]=b[j];
 54             k++;
 55             j++;
 56         }
 57     }
 58     while(i<5){
 59         c[k]=a[i];
 60         k++;
 61         j++;
 62     }
 63     while(j<5){
 64         c[k]=b[j];
 65         k++;
 66         j++;
 67     }
 68     for(i=0;i<10;i++){
 69         printf(" %d ",c[i]);
 70     }
 71 }
 72
 73

