#include<stdio.h>
#include<ctype.h>

main(){
  char alp;
  printf("Press Enter alphabet \n");

  putchar("\n");
  alp.getchar();

  if(islower(alp)){
     putchar(toupper(alp));
  } else {
     putchar(tolower(alp));
  }
}
