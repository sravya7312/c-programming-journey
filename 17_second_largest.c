#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int first, second;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    first = second = -2147483648;

    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("Second Largest = %d\n", second);
    return 0;
}