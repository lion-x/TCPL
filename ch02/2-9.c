#include <stdio.h>

int bitcount(unsigned x) {
    int b = 0;
    if (x != 0) {
        b = 1;
        while ((x &= (x - 1)) != 0) {
            b++;
        }
    }
    return b;
}

int main() {
    int x = 1023;
    int b = bitcount(x);
    printf("%d\n", b);
    return 0;
}