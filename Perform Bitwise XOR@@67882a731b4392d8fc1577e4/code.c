#include <stdio.h>

int main() {
    int num1, num2, result;

    // Input two integers
    printf("");
    scanf("%d", &num1);

    printf("");
    scanf("%d", &num2);

    // Perform bitwise XOR
    result = num1 ^ num2;

    // Print the result
    printf("%d",result);

    return 0;
}
