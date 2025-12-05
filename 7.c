#include <assert.h>
#include <stdio.h>

int divide(int a, int b) {
    assert(b != 0); // debug-time check
    return a / b;
}

int main(void) {
    printf("%d\n", divide(10, 2)); // OK
    // divide(10, 0); // would abort if uncommented (in debug builds)
    return 0;
}