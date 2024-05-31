Write a C-program that reads an input character (using scanf) and displays the following pyramid pattern using the character read: 

Examples
Input
#
Output
++++#++++
+++###+++
++#####++
+#######+
#########

  sol:
#include <stdio.h>
int main(void) {
    char letter = '#';
    char letter 2,letter 3,letter 4='#';
     char letter 5,letter 6,letter 7,letter 8,letter 9='#';
    char letter 10,letter 11,letter 12,letter 13,letter 14,letter 15,letter 16='#';
    char letter 17,letter 18,letter 19,letter 20,letter 21,letter 22,letter 23,letter 24,letter 25='#';
    printf("++++");
    printf("#");
    scanf("%c", &letter);
    printf("++++\n");
    printf("+++");
     printf("###");
    scanf("%c%c%c", &letter 2,&letter 3,&letter 4);
   printf("+++\n");
    printf("++");
     printf("#####");
      scanf("%c%c%c%c%c", &letter 5,&letter 6,&letter 7,&letter 8,&letter 9);
    printf("++\n");
    printf("+");
    printf("#######");
    scanf("%c%c%c%c%c%c%c", &letter 10,&letter 11,&letter 12,&letter 13,&letter 14,&letter 15,&letter 16);
    printf("+\n");
      printf("#########");
      scanf("%c%c%c%c%c%c%c%c%c", &letter 17,&letter 18,&letter 19,&letter 20,&letter 21,&letter 22,&letter 23&letter 24,&letter 25);
    return 0;
} 

or

#include <stdio.h>

int main(void) {

    char l;

    scanf("%c", &l);

    printf("++++%c++++\n", l);
    printf("+++%c%c%c+++\n", l, l, l);
    printf("++%c%c%c%c%c++\n", l, l, l, l, l);
    printf("+%c%c%c%c%c%c%c+\n", l, l, l, l, l, l, l);
    printf("%c%c%c%c%c%c%c%c%c\n", l, l, l, l, l, l, l, l, l);

    return(0);
}
