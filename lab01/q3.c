A customer asks the IT firm to develop a program in C language, which can take tax rate  and salary from the user on runtime and then calculate the tax, the user has to pay and  the salary he/she will have after paying the tax. Display the net income after tax deduction. 

solution:

#include <stdio.h>

int main()
 {
    float salary, taxRate, taxAmount, netIncome;

    // Prompt the user for salary and tax rate
    printf("Enter your salary: ");
    scanf("%f", &salary);
    printf("Enter tax rate (as a percentage): ");
    scanf("%f", &taxRate);

    // Calculate tax amount and net income
    taxAmount = salary * (taxRate / 100);
    netIncome = salary - taxAmount;

    // Display the results
    printf("Tax to be paid: %.2f\n", taxAmount);
    printf("Net income after tax deduction: %.2f\n", netIncome);

    return 0;
}
