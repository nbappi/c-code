#include<stdio.h>

main(){
  printf("Enter weight and height for 3 boys : \n");

  int i=0, count = 0;
  float w, h;
  while( i < 3){
    scanf("%f %f", &w, &h);
    if( w < 50 && h > 170){
      count = count+1 ;
    }
    i++;
  }

  printf("Number of boys with weight < 50 and height >170 = %d", count);
}
