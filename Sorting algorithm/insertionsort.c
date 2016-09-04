#include<stdio.h>

main(){
   int arr[] ={ 5, 3, 9, 7,1 };
   int n = sizeof arr / sizeof arr[0];
   printf("Num :%d ..................\n", n);
   int i, x, l,j;

   for( i=1; i <=n; i++){
       printf(".......text\n");
       x = arr[i];
       j = i-1;
       while( arr[j] > x && j >=1){
           arr[j+1] = arr[j];
           j--;
       }
       arr[j+1] =x ;
   }

   for( l=1; l<= n; l++){
        printf("%d \n", arr[l]);
   }

}
