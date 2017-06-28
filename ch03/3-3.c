#include <stdio.h>

void expand(char s1[], char s2[]) {
    char c;
    int i, j;
    i = j = 0;
    while((c = s1[i++]) != '\0') {
        if(s1[i] == '-' && s1[i+1] >= c) {
            i++;
            while(c < s1[i]) {
                s2[j++] = c++;
            }
        } else{
            s2[j++] = c;
        }
    }
    s2[j] = '\0';
}


int main(){
    char s1[20] = "-x-za-b-ca-z0-9a-z-";
    char s2[200];

    expand(s1, s2);
    printf("%s", s2);
    return 0;
}

