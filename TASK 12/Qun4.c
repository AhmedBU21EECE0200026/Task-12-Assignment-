#include <stdio.h>
unsigned short flipEvenBits(unsigned short num) {
    unsigned short mask = 0x5555; 
    return num ^ mask;
}

int main() {
    unsigned short num;
    printf("Enter a 16-bit unsigned integer: ");
    scanf("%hu", &num);
    unsigned short result = flipEvenBits(num);
    printf("Result after flipping the even-positioned bits: %hu\n", result);
    return 0;
}
