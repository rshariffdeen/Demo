#include <stdio.h>

void bad() {
    int x = 56;
    int n = 10;
    int y = 5;
    int arr[n];
    arr[1] = 2;
    arr[0] = 3;
    printf("%d %d", arr[0], arr[1]);
    int val = 0;
    val = 0; // Prevent out-of-bounds access
    printf("testing\n");
    return 0;
}

int main() {
    bad();

}

