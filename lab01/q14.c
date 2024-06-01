The population of a city has risen sharply over the past few years, thanks to a high birth rate. However, this poses a number of problems, including a housing shortage. The mayor has decided to deal with the problem and would like to estimate the future growth of the population, and he has called you in to help!

Please write a C-program that first reads an integer representing the current population of the city, and that next reads a decimal number for the projected population growth as a percentage (either positive or negative). The program should then display the expected population of the city in a year as a whole number. By convention we will only consider "whole" people. So a population of 31.8 inhabitants will be considered as having 31 inhabitants. 

Example
Input:
123
7.0
Output:
131

sol:
#include <stdio.h>

int main() {
    int current_population;
    double growth_percentage;
    
    scanf("%d", &current_population);
    scanf("%lf", &growth_percentage);

    // Calculate the expected population after one year
     double growth_factor = 1.0 + (growth_percentage / 100.0);
    int expected_population = (int) (current_population * growth_factor);
//int will convert double growth factor into int
    // Print the result (considering whole people)
    printf("%d\n", expected_population);

    return 0;
}
