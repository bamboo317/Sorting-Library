#include <stdio.h>
#include "heapsort.h"
#include "quicksort.h"

print_spaces(int n) {
    int i = 0;
    for (i=0; i < n; i++) {
        printf(" ");
    }
}

int jpow(int n) {
    int i=0;
    while (n > 0) {
        printf("%d\n", n);
        n = n >> 1;
        i++;
    }
    return i;
}

int jexp(int base, int pow) {
    int total = 1;
    int i = 0;
    for (i=0; i < pow; i++) {
        total *= base;
    }

    return total;
}


print_max_heap(int arr[], int length) {
    int level = 0;
    int space = 4*jpow(length);
    int space_buf =0;
    int i = 0;

    print_spaces(space/2);
    for (level = 0;;level++) {
        for (i = jexp(2, level)-1; i < jexp(2, level+1) -1; i ++) {
            if (!(i < length)) {
                printf("\n");
                return;
            }
            printf("%d", arr[i]);
            print_spaces(space);
        }
        printf("\n");
        space /=2;
        print_spaces(space/2);
    }
}

int main(int argc, char *argv[]) {

    int arr[] = {1, 6, 4, 9, 10, -1, 5, 6, 6, 16, 43, 7, 100};
    int i = 0;

    for (i=0; i < sizeof(arr)/4; i++) {
        printf("%d ", arr[i]);
    }

    quicksort(arr, 0, sizeof(arr)/4-1);
    printf("\n");
    for (i=0; i < sizeof(arr)/4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    print_max_heap(arr, sizeof(arr)/4);
    printf("\n");

    return 0;
}
