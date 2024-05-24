#include <stdio.h>
int main() {
    unsigned int packed_ip = 0xC0A80164;
    unsigned char a = (packed_ip >> 24) & 0xFF; 
    unsigned char b = (packed_ip >> 16) & 0xFF; 
    unsigned char c = (packed_ip >> 8) & 0xFF;  
    unsigned char d = packed_ip & 0xFF;        
    printf("The unpacked IP address is: %u.%u.%u.%u\n", a, b, c, d);
    return 0;
}

