#include <stdio.h>
#define REPYES 1
#define REPNO 0

void squeeze(char s1[], char s2[]) {
    int i, j;
    int flag = REPNO;

    i = j = 0;

    while(s1[i] != '\0') {
        for(int k = 0; s2[k] != '\0'; k++) {
            if(s1[i] == s2[k]) {
                flag = REPYES;
                break;
            }
        }
        if (flag == REPNO) {
            s1[j++] = s1[i++];
        } else {
            flag = REPNO;
            i++;
        }
    }
    s1[j] = '\0';
}


int main() {
    char s1[15] = "I am from PKU!";
    char* s2 = "I am XIANGZHIQIANG.";
    squeeze(s1, s2);
    printf("%s", s1);
    return 0;
}

