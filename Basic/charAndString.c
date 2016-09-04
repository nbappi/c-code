#include<stdio.h>

main(){
    char x ='A';
    static char name[30] = "Md. Nuruzzaman Bappi";

    printf("%c\n%3c\n%5c\n", x,x,x);
    printf("%3c\n%c\n", x,x);

    printf("Tower : \n");
    printf("%5c\n", x);
    printf("%3c%4c\n", x, x);
    printf("%c%8c\n", x, x);

    printf("Output of characters:\n");
    printf("%s\n", name);
    printf("%30s\n", name);
    printf("%30.10s\n", name);

    printf("%.10s\n", name);
    printf("%-30.10s\n", name);

}
