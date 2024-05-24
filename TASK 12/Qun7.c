#include <stdio.h>
#include <stdlib.h>
unsigned long long convertMACAddress(const char *mac) {
    unsigned int bytes[6];
    if (sscanf(mac, "%x:%x:%x:%x:%x:%x", &bytes[0], &bytes[1], &bytes[2], &bytes[3], &bytes[4], &bytes[5]) != 6) {
        fprintf(stderr, "Invalid MAC address format.\n");
        exit(EXIT_FAILURE);
    }
    unsigned long long macBinary = 0;
    for (int i = 0; i < 6; ++i) {
        macBinary = (macBinary << 8) | (bytes[i] & 0xFF);
    }
    return macBinary;
}
int main() {
    char macString[18];
    printf("Enter MAC address in the format XX:XX:XX:XX:XX:XX: ");
    if (scanf("%17s", macString) != 1) {
        fprintf(stderr, "Failed to read MAC address.\n");
        return EXIT_FAILURE;
    }
    unsigned long long macBinary = convertMACAddress(macString);
    printf("MAC address in 48-bit binary pattern: %012llx\n", macBinary);
    return 0;
}