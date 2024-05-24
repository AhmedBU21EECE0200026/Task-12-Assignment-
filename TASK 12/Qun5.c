#include <stdio.h>
unsigned int packIP(unsigned char a, unsigned char b, unsigned char c, unsigned char d) {
    return (a << 24) | (b << 16) | (c << 8) | d;
}

int main() {
    unsigned char a = 192;
    unsigned char b = 168;
    unsigned char c = 1;
    unsigned char d = 100;
    unsigned int packedIP = packIP(a, b, c, d);
    printf("Packed IP address: 0x%X\n", packedIP);

    return 0;
}

