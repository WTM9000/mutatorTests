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