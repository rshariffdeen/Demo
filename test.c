#include <stdio.h>

void bad() {
    int x = 56;
    int n = 10;
    int y = 5;
    int arr[n];
    arr[1] = 2;
    arr[0] = 3;
    // Fixing potential out-of-bounds access
    if (n > 2) {
        printf("%d %d %d", arr[0], arr[1], arr[2]);
    } else {
        printf("%d %d", arr[0], arr[1]);
    }
    int val = 0;
    // Fixing potential out-of-bounds access
    if (x + y + 5 < n) {
        val = arr[x + y + 5];
    }
    printf("testing\n");
    return;
}

int main() {
    bad();
}