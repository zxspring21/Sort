//由左到右，逐一把數字插入到目前已排序的陣列當中。需將大量數字往右挪，以騰出空間插入數字。
#include <stdio.h>
#define arrsize 6
int main(){
   int arr[arrsize]={27,7,2,9,4,85};
   int i,j=0,tmp;
   for(i=0;i<arrsize;i++){
      tmp = arr[i];
      for(j=i;j>0;j--){
         if( arr[j-1]>arr[j] ) {
            arr[j] = arr[j-1];
            arr[j-1]=tmp;
         }
      }
      printf("\n%d. ",i);
      for(j=0;j<arrsize;j++)
        printf("%d ", arr[j]);
   }
   return 0;
}
