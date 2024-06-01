You just started learning a new language and decide to buy a few books to practice. Thankfully you quickly find a book seller who offers every book for the same low fixed price. You have a certain amount of money and you would like to know how many books of the same price you can purchase.

Please write a C-program that starts by reading the amount of money you have (which may be a double), then reads the price per book (which again may be a double). The program should then display an integer, namely the largest number of books that you can purchase with the given amount of money.

Examples

Input
27.0
5.0
Output
5

sol:
#include <stdio.h>
int main(void) {
    double dOne, dTwo;
    scanf("%lf %lf", &dOne, &dTwo);
   double dOutput=dOne/dTwo;
    int iOutput;
    iOutput = (int)dOutput ;
    printf("%d", iOutput);
     return 0;
}
//converting double to integer doesnt round off that number
//Remember that when dividing two integers in C the result is always rounded down. Integer division should help you find the maximum number of whole books you can purchase.
