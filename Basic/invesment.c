#include<stdio.h>

void main(){
    int year , period;
    float amount, inrate, value;

    printf(" Input Amount : Interest rate : Period\n\n");
    scanf("%f %f %d ", &amount, &inrate, &period);
    printf("\n");

    year = 1;
    while( year <= period ){
       value = amount + inrate * amount;
       printf("%2d Rs %8.2f \n", year, value);
       amount = value;
       year = year + 1;
    }
}
