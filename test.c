#include <stdio.h>

int bad() {
    int x = 56;
    int n = 10;
    int y = 5;
    int arr[n];
    arr[1] = 2;
    arr[0] = 3;
    printf("%d %d %d", arr[0], arr[1], arr[2]);
    int val = 0;
    val = arr[x+y+5];
    printf("testing\n");
    return val;
}

int main() {
    bad();

}

