int main() {
    int data[] = {2, 3, 0, 4, 3, 7};
    printf("fib_mod(10,1000): %d\n", fibonacci_mod(10, 1000));
    printf("product skip zero: %d\n", array_product(data, 6));
    printf("unique count: %d\n", count_unique(data, 6));
    classify_numbers(data, 6);
    printf("safe_max: %d\n", safe_max(data, 6));
    return 0;
}
