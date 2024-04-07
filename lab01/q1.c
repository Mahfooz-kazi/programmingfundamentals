Q1:A car traveled for some hours. Take the number of Hours travelled as input on runtime,  and then take input for the Distance Travelled during this time, Calculate Average Speed  and display it on the screen.

  solution:

 #include <stdio.h>

int main() {
    float hours, distance, average_speed;

    // Input for number of hours traveled
    printf("Enter the number of hours traveled: ");
    scanf("%f", &hours);

    // Input for distance traveled
    printf("Enter the distance traveled (in km): ");
    scanf("%f", &distance);

    // Calculate average speed
    average_speed = distance / hours;

    // Display the average speed
    printf("The average speed is: %.2f km/h\n", average_speed);
     //  The number after the dot represents the number of decimal places to display.

    return 0;
}

