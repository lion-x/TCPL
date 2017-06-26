#include <stdio.h>

void escape(char s[], char t[]) {
    int i, j;
    i = j = 0;
    while(t[j] != '\0') {
        switch(t[j]) {
            case '\n': s[i++] = '\\'; s[i++] = 'n'; break;
            case '\t': s[i++] = '\\'; s[i++] = 't'; break;
            default: s[i++] = t[j]; break;
        }
        j++;
    }
    s[i] = '\0';
}

int main() {
    char s[40];
    char t[30] = "I am\nxiang\t zhiqiang!";
    escape(s, t);
    printf("%s\n", s);
    return 0;
}