//由左到右，相鄰兩兩比較，較大者往右挪，最後最大值會出現在陣列右端。遞迴處理尚未排序的 N-1 個元素。
#include <stdio.h>
#define arrsize 6
int main(){
   int arr[arrsize]={27,7,2,9,4,85};
   int i,j=0,tmp;
   for(i=0;i<arrsize;i++){
      for(j=0;j<arrsize-i-1;j++){
         if( arr[j]>arr[j+1] ) {
            tmp=arr[j+1];
            arr[j+1] = arr[j];
            arr[j]=tmp;
         }
      }
      printf("\n%d. ",i);
      for(j=0;j<arrsize;j++)
        printf("%d ", arr[j]);
   }
   return 0;
}
