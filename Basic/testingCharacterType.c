#include<stdio.h>
#include<ctype.h>

main(){
  char character;
  printf("Press any key \n");

  character.getchar();

  if(isalpha(character) > 0 ){
     printf("This is letter.")
  } else {
     if(isdegit(character) > 0 ){
        printf("This value is digit.")
     } else {
        printf("This value is not alphanumeric.")
     }
  }
}
