#include <stdio.h>

int main() {
    int n, rev = 0, temp, rem;

    scanf("%d", &n);
    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (rev == n)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}