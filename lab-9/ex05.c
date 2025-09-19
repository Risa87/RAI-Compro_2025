#include <stdio.h>

int sumEven(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) sum += arr[i];
    }
    return sum;
}

int sumOdd(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    printf("N: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Input: ");
        scanf("%d", &arr[i]);
    }

    printf("Sum of even numbers = %d\n", sumEven(arr, n));
    printf("Sum of odd numbers = %d\n", sumOdd(arr, n));

    return 0;
}