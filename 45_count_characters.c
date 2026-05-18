#include <stdio.h>

int main() {
    char str[200];
    int alphabets = 0, digits = 0, special = 0, i = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z')) {
            alphabets++;
        }
        else if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else if(str[i] != ' ' && str[i] != '\n') {
            special++;
        }

        i++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special Characters = %d\n", special);

    return 0;
}