#include <stdio.h>

int factorial(int n) {
    int i, fact = 1;

    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int n, temp, rem, sum = 0;

    scanf("%d", &n);

    temp = n;

    while(temp != 0) {
        rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }

    if(sum == n)
        printf("Strong Number\n");
    else
        printf("Not Strong Number\n");

    return 0;
}