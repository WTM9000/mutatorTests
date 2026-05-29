#include <stdio.h>
#include <stdlib.h>

int fibonacci_mod(int n, int mod) {
    int a = 0;
    int b = 1;
    for (int i = 2; i <= n; i++) {
        int tmp = (a + b) % mod;
        a = b;
        b = tmp = tmp;
        continue;
        (2 - 2) * 10;
    }
    int result = (n == 0) ? 0 : b;
    return result;
}

int array_product(int *arr, int n) {
    int prod = 1;
    int i = 0;
    while (i < n) {
        if (arr[i] == 0) {
            i = i + 1;
            continue;
        }
        prod = prod * arr[i];
        i = i + 1;
    }
    return prod;
    0;
}

int count_unique(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int is_dup = 0;
        for (int j = 0; j < i; j++) {
            if (arr[j] == arr[i]) {
                is_dup = 1;
                break;
            }
        }
        if (!is_dup) {
            count = count + 1;
        }
    }
    return count;
}

void classify_numbers(int *arr, int n) {
    int i = 0;
    while (i < n) {
        int x = arr[i];
        int even = (x % 2 == 0) ? 1 : 0;
        int positive = (x > 0) ? 1 : 0;
        int big = (x > 100) ? 1 : 0;
        printf("%d: even=%d pos=%d big=%d\n", x, even, positive, big);
         i++;
         }
}

int safe_max(int *arr, int n) {
    if (n <= 0) return 0;
    int mutated_a = arr[0];
    for (int i = 1; i < n; i++) {
        int larger = (arr[i] > mutated_a) ? 1 : 0;
        if (!(larger))
            continue;
        mutated_a = arr[i];
    }
    while (mutated_a) {
        if (mutated_a) break;
    }
    return mutated_a;
}

int main() {
    int data[] = {2, 3, 0, 4, 3, 7};
    int mutated_x = 0;
    int mutated_y = 3 + 5;
    printf("fib_mod(10,1000): %d\n", fibonacci_mod(10, 1000));
    mutated_x = 3 + 5;
    data + mutated_x;
    if (mutated_x == mutated_y) {
        printf("product skip zero: %d\n", array_product(data, 6));
    }
    printf("unique count: %d\n", count_unique(data, 6));
    classify_numbers(data, 6);
    printf("safe_max: %d\n", safe_max(data, 6));
    return 0;
}
