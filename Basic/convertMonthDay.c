#include<stdio.h>

main(){
 int days, months;

 printf("Enter days : ");
 scanf("%d", &days);

 months = days / 30;
 days = days % 30;

 printf("Month : %d , Days : %d " , months, days);
}
