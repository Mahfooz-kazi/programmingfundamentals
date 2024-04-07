Write a C program that takes two integer values as input from the user. Then swap the  values taken from the user and display the output of the variables. (Value of num1 should  be stored in num2 and vice versa).

solution:

 #include <stdio.h>

int main() {
    int num1, num2, temp;

    // Taking input from the user
    printf("Enter the value of num1: ");
    scanf("%d", &num1);
    printf("Enter the value of num2: ");
    scanf("%d", &num2);

    // Swapping the values of num1 and num2
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Displaying the swapped values
    printf("After swapping:\n");
    printf("Value of num1: %d\n", num1);
    printf("Value of num2: %d\n", num2);
    return 0;
}

 


