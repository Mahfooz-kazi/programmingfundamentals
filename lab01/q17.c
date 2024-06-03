does a==b?
a=5,b=2

sol:
  #include <stdio.h>
int main(void) {
    // + - * / % : arithmetic operators
    // < > <= >= != == : comparison operators
    int a = 5;
    int b = 2;
    int result;
    printf("Check: Is a == b?\n");
    result = (a==b);
    printf("Result is %d.\n", result);
    if (result) {
        printf("TRUE!\n");
    } else {
        printf("FALSE!\n");
    }
    return 0;
} 
/*a==b,this result statement is false 5=2,it will give output result is 0(false), 
if both values were same then it will give output result is 1 mean true*/
//false is 0,0.0
//true is any positive or negative integer
