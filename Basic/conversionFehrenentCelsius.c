#include<stdio.h>

#define F_LOW 0
#define F_MAX 250
#define STEP 25

main(){
    typedef float REAL;
    REAL farh, cels;

    farh = F_LOW;
    printf("Fahrenheit    Celsius  \n\n");
    while( farh <= F_MAX){
       cels = (farh - 32.0) /1.8 ;
       printf("%5.1f        %7.2f \n", farh , cels);
       farh = farh + STEP;
    }
}
