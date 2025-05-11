#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int value_one, value_two, subtration;
    
    // Read the values
    printf("Write value one: ");
    scanf("%d", &value_one);
    
    printf("Write value two: ");
    scanf("%d", &value_two);
    
    // Calculate the subtraction between the highest and the lowest value
    if (value_one > value_two) {
        subtration = value_one - value_two;
    } else {
        subtration = value_two - value_one;
    }

    // Show the result
    printf("The difference between the largest and smallest value is: %d\n", subtration);

    return 0;
}
