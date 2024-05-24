#include <stdio.h>
int main() 
{
    unsigned short int value = 0;
    unsigned short int mask = (1 << 4) | (1 << 11);
    value |= mask;
    printf("The value after setting the 5th and 12th bits is: %u\n", value);
    return 0;
}
