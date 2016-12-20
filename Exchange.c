#include <stdio.h>
#include <string.h>
#define arrsize 6
int main(){
   int arr[6]={27,7,2,9,4,85};
   int i,j=0,tmp;
   for(i=0;i<arrsize-1;i++){
       printf("%d. ",i);
      for(j=i+1;j<arrsize;j++){
        if(arr[j]<arr[i]){
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
        }
      }
      for(j=0;j<arrsize;j++)
         printf("%d ",arr[j]);
      printf("\n");
   }
   return 0;

}
