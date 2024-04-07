Calculate the volume of a cone, using FLOAT data type for all values and output the final  answer up to 3 decimal places exactly. 

  solution:

  #include <stdio.h>
#include <math.h>

int main() {
    float radius, height, volume;
    
    // Prompt the user for the radius and height of the cone
    printf("Enter the radius of the cone: ");
    scanf("%f", &radius);
    printf("Enter the height of the cone: ");
    scanf("%f", &height);

    // Calculate the volume of the cone
    volume = (1.0/3.0) * M_PI * radius * radius * height;
    // 1/3 is part of formula
    
    // Display the result up to 3 decimal places
    printf("The volume of the cone is: %.3f cubic units\n", volume);
    //  The number after the dot represents the number of decimal places to display.

    return 0;
}
