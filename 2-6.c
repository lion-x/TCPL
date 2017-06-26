#include <stdio.h>

int setbits(unsigned x, int p, int n, unsigned y) {
    return ~(~(~0 << n) << (p + 1 - n)) & x | (y & ~(~0 << n)) << (p + 1 -n);
}

int main() {
    int x, y;
    x = 1020; //0011 1111 1100
    y = 18;   //0000 0001 0010

    printf("%d\n", setbits(x, 5, 2, y)); //0011 1110 1100

    return 0;
}



