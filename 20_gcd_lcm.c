#include <stdio.h>

int main() {
    int a, b, x, y, temp, gcd, lcm;

    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = (x * y) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}