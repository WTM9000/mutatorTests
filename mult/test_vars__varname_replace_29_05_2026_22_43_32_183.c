int array_product(int *arr, int n) {
    int mutated_a = 1;
    int i = 0;
    while (i < n) {
        if (arr[i] == 0) {
            i = i + 1;
            continue;
        }
        mutated_a = mutated_a * arr[i];
        i = i + 1;
    }
    return mutated_a;
}
