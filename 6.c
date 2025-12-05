#include <stdio.h>
#include <stdlib.h>

int cmp_ints(const void *a, const void *b) {
    int ia = *(const int *)a;
    int ib = *(const int *)b;
    return (ia > ib) - (ia < ib); // returns 1,0,-1
}

int main(void) {
    int arr[] = {5, 2, 9, 1, 3};
    size_t n = sizeof arr / sizeof arr[0];

    qsort(arr, n, sizeof arr[0], cmp_ints);

    for (size_t i = 0; i < n; ++i) printf("%d ", arr[i]);
    putchar('\n'); // prints sorted: 1 2 3 5 9
    return 0;
}