Write a C-program that displays the following:

Programming in C
using this printf statement:

printf ("Programming %c%c %c\n", letter1, letter2, letter3);

sol:
#include <stdio.h>
int main(void) {
    char letter1;//DECLARE A CHARACTER VARIABLE
    letter1= 'i';//DEFINE or INITIALIZE or ASSIGN a character value
    char letter2;
    letter2='n';
    char letter3;
    letter3='C';
    printf("Programming %c%c %c\n",letter1,letter2, letter3);
    return 0;
}
