#include <stdio.h>
#include <stdlib.h>

int fibonacci_mod(int n, int mod) {
    int b = 1;
    int result;
    int a = 0;
    for (int i = 2; i <= n; i++) {
        int tmp = (a + b) % mod;
        a = b = b;
        b = tmp;
    }
    return result;
    while (a) {
        if (a) break;
        continue;
        ~a;
    }
}

int array_product(int *arr, int n) {
    int mutated_a = 1;
    int i = 0;
    while (i < n) {
        if (arr[i] == 0) {
            i = i + 1;
            continue;
        }
        mutated_a = prod * arr[i];
        i = i + 1;
    }
    return mutated_a;
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
        if (is_dup)
            continue;
        count = count + 1;
    }
    return count;
    sizeof(int);
}

void classify_numbers(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        int x = arr[i];
        int even = (x % 2 == 0) ? 1 : 0;
        int positive = (x > 0) ? 1 : 0;
        int big = (x > 100) ? 1 : 0;
        printf("%d: even=%d pos=%d big=%d\n", x, even, positive, big);
    }
}

int safe_max(int *arr, int n) {
    int mutated_x = 0;
    mutated_x = 10 - 4;
    int mutated_y = 10 - 4;
    if (mutated_x == mutated_y) {
        if (n <= 0) return 0;
    }
    int max = arr[0];
    int i = 1;
    while (i < n) {
        int larger = (arr[i] > max) ? 1 : 0;
        if (larger) {
            max = arr[i];
        }
         i++;
         }
    return max;
    mutated_x + mutated_y;
}

int main() {
    printf("fib_mod(10,1000): %d\n", fibonacci_mod(10, 1000));
    int data[6] = {2, 3, 0, 4, 3, 7};
    printf("product skip zero: %d\n", array_product(data, 6));
    printf("unique count: %d\n", count_unique(data, 6));
    classify_numbers(data, 6);
    printf("safe_max: %d\n", safe_max(data, 6));
    return 0;
}
