int array_product(int *arr, int n) {
    int prod = 1;
    int mutated_a = 0;
    while (mutated_a < n) {
        if (arr[mutated_a] == 0) {
            mutated_a = i + 1;
            continue;
        }
        prod = prod * arr[mutated_a];
        mutated_a = i + 1;
    }
    return prod;
}
