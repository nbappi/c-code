#include<stdio.h>

main(){
  int no ;
  char name1[15], name2[15], name3[15];

  printf("Enter First Number And name: \n");
  scanf("%d %15c", &no, name1);
  printf("Number : %d  , Name : %15s \n", no , name1);

  printf("Enter Second Number And name: \n");
  scanf("%d %s", &no, name2);
  printf("Number : %d  , Name : %s \n", no , name2);

  printf("Enter Third Number And name: \n");
  scanf("%d %15s", &no, name3);
  printf("Number : %d  , Name : %15s \n", no , name3);
}
