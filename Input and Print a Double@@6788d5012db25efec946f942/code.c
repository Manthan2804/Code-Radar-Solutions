// Your code here...
#include <stdio.h>
#include <math.h>  // For rounding function

int main() {
    float num;

    // Prompt for input
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    
    // Round the number to 4 decimal places
    num = roundf(num * 10000) / 10000;

    // Print the number with 4 decimal places
    printf("You entered: %.4f\n", num);

    return 0;
}
