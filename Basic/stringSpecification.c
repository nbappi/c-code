#include<stdio.h>

main(){
  char alp[80];
  printf("Please Enter Address: \n");
  scanf("%[a-z]", alp);
  printf("%-80s\n\n", alp);
}
