//掃描一遍所有數字，找到最小值，挪至陣列左端。遞迴處理尚未排序的 N-1 個元素。
#include <stdio.h>
#define arrsize 6
int main(){
   int arr[6]={27,7,2,9,4,85};
   int i,j=0,min,tmp;

   for(j=0;j<arrsize;j++){
      min =j;
      for(i=j;i<arrsize;i++){
          if(arr[min] > arr[i])
             min= i;
      }
      tmp = arr[j];
      arr[j] = arr[min];
      arr[min] = tmp;
   }
   printf("\n");
   for(i=0;i<arrsize;i++){
      printf("%d ",arr[i]);
   }
   return 0;
}
