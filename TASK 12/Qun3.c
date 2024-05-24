#include <stdio.h>
unsigned int clearBits(unsigned int num) {
    unsigned int mask = ~((1 << 5) | (1 << 18)); 
    return num & mask;
}
int main() {
    unsigned int num;
    printf("Enter a 32-bit unsigned integer: ");
    scanf("%u", &num);
    unsigned int result = clearBits(num);
    printf("Result after clearing the 6th and 19th bits: %u\n", result);
    return 0;
}
