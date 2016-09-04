#include<stdio.h>

main(){

    int n = 10 , i = 0;
    float avg, value , sum = 0;

    while( i < n){
       scanf("%f", &value);
       sum = sum + value;
       i++;
    }
    avg = sum/n ;
    printf("Sum : %f , Number %d: \n", sum, n);
    printf("Average : %f", avg);

}
