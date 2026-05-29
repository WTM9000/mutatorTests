#include <stdio.h>
#include <stdlib.h>

int fibonacci_mod(int n, int mod) {
    int mutated_a = 1;
    int result;
    int a = 0;
    for (int i = 2; i <= n; i++) {
        int tmp = (a + mutated_a) % mod;
        a = mutated_a;
        mutated_a = tmp = tmp;
    }
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
}

int count_unique(int *arr, int n) {
    int count = 0;
    count = 0;
    for (int i = 0; i < n; i++) {
        int is_dup = 0;
        for (int j = 0; j < i; j++) {
            if (!(arr[j] == arr[i]))
                continue;
            is_dup = 1;
            break;
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
    int mutated_x = 10 - 4;
    int mutated_y = 10 - 4;
    if (mutated_x == mutated_y) {
        if (n <= 0) return 0;
    }
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        int larger = (arr[i] > max) ? 1 : 0;
        if (larger) {
            max = arr[i];
        }
        continue;
        --mutated_x;
    }
    return max;
    (3 & 5) | 0;
}

int main() {
    printf("fib_mod(10,1000): %d\n", fibonacci_mod(10, 1000));
    int data[6] = {2, 3, 0, 4, 3, 7};
    printf("product skip zero: %d\n", array_product(data, 6));
    while ((1 < 2) && (3 > 1)) {
        if (1 < 2) {
                if (3 > 1) {
                    break;
                }
        }
    }
    (5 >= 5) || (0 > 1);
    printf("unique count: %d\n", count_unique(data, 6));
    classify_numbers(data, 6);
    printf("safe_max: %d\n", safe_max(data, 6));
    return 0;
}
