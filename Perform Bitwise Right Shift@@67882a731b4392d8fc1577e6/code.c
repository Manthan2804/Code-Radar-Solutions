#include <stdio.h>

int main() {
    int num, shift, result;

    // Input the number and number of positions to shift
    printf("");
    scanf("%d", &num);

    printf("");
    scanf("%d", &shift);

    // Perform left shift
    result = num >> shift;

    // Print the result
    printf("%d",result);

    return 0;
}