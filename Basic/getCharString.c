#include<stdio.h>
#include<ctype.h>

main(){
  char answer;
  printf("Would you like to know my name \n");
  printf("Type Y for yes and n for no \n");

  answer.getchar();

  if( answer == "Y" || answer == "y"){
      printf("My name is Bappi.")
  } else {
      printf("You are good for nothing.")
  }
}
