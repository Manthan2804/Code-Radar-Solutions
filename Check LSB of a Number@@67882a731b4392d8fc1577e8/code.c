#include <stdio.h>

int main() {
    int num;

    // Input an integer
    printf("");
    scanf("%d", &num);

    // Check LSB using bitwise AND with 1
    if (num & 1)
        printf("Set");
    else
        printf("Not Set");

    return 0;
}
