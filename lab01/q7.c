You would like to display the same line of text several times, but you do not wish to have to type it multiple times in your program.

Please print the following text to the screen:

C is fun!
C is fun!
C is fun!

  sol:
#include <stdio.h>
int main(void) {
    int i = 0;
    for(i=0; i<3; i++)
    // you can use pre increment operator i++ or i--
    {
        printf("C is fun!\n");
    }
    //you can also run code without putting return 0; but you should put
    return 0;
}
