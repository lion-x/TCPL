#include <stdio.h>

int lower(char c) {
    return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
}

int main() {
    char c = 'X';
    printf("%c\n", lower(c));
    return 0;
}