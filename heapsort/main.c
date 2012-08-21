#include <stdio.h>
#include "heapsort.h"

int main(int argc, char *argv[]) {

    int arr[] = {1, 6, 4, 9, 10, -1, 5, 6, 6, 16, 43, 7, 100};
    int i = 0;

    printf("Original array:\n");
    for (i=0; i < sizeof(arr)/4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    heapsort(arr, sizeof(arr)/sizeof(int));

    for (i=0; i < sizeof(arr)/4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
