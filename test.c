#include <stdio.h>

void bad() {
    int x = 56;
    int n = 10;
    int y = 5;
    int arr[10]; // Fixed size array
    arr[1] = 2;
    arr[0] = 3;
    printf("%d %d", arr[0], arr[1]); // Removed out-of-bounds access
    int val = 0;
    // Removed out-of-bounds access
    printf("testing\n");
    return;
}

int main() {
    bad();

}

