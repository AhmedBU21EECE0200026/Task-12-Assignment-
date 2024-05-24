#include <stdio.h>
#include <stdlib.h>
void binaryToMac(const char* binary) {
    unsigned int bytes[6] = {0};
    for (int i = 0; i < 48; ++i) {
        bytes[i / 8] = (bytes[i / 8] << 1) | (binary[i] - '0'); 
    }
    printf("MAC Address: %02X:%02X:%02X:%02X:%02X:%02X\n",
           bytes[0], bytes[1], bytes[2], bytes[3], bytes[4], bytes[5]);
}
int main() {
    const char* binary_pattern = "101010101011101111001100110111011110111111111111";
    binaryToMac(binary_pattern);
    return 0;
}
