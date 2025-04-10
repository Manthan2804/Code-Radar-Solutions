#include <stdio.h>

int main() {
    int num;

    // Input an integer
    printf("");
    scanf("%d", &num);

    // Create a mask for the MSB (Most Significant Bit)
    int msbMask = 1 << 31;  // 0x80000000

    // Check if MSB is set
    if (num & msbMask)
        printf("Set");
    else
        printf("Not Set");

    return 0;
}
