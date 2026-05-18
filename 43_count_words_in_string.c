#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 1;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        if(str[i] == ' ')
            words++;
        i++;
    }

    printf("Words = %d\n", words);

    return 0;
}