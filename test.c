#include <stdio.h>

void bad() {
    int x = 56;
    int n = 10;
    int y = 5;
    int arr[n];
    arr[1] = 2;
    arr[0] = 3;
    printf("%d %d %d", arr[0], arr[1], arr[2]);
    int val = 0;
    if (x + y + 5 < n) {
        val = arr[x + y + 5];
    } else {
        printf("Index out of bounds\n");
    }
    printf("testing\n");
    return;
}

int main() {
    bad();

}

