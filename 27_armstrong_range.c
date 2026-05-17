#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int temp = n, rem, sum = 0, digits = 0;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int a, b, i;

    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }

    return 0;
}