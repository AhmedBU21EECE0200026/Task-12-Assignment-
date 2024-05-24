#include <stdio.h>
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int setBits = countSetBits(num);
    printf("Number of set bits in %d is %d\n", num, setBits);
    return 0;
}
