/*
 * heapsort.c - Joe Mills
 *
 * A heap implemented using an array. Heaps can be used for
 * non-sorting stuff, but a heap can be sorted.
 */

int parent (int i) {
    return i/2;
}

int left (int i) {
    return i*2;
}

int right (int i) {
    return i*2 + 1;
}

void swap(int arr[], int x, int y) {
    int tmp = arr[x];
    arr[x] = arr[y];
    arr[y] = tmp;
}

/*
 * given 3 indexes, return the index that has the largest value
 * in the array.
 */
int MAX3(int arr[], int x, int y, int z, int size) {
    int largest;
    if (y < size && arr[y] > arr[x]) largest = y;
    else largest = x;
    if (z < size && arr[z] > arr[largest]) largest = z;
    return largest;
}

/*
 *
 */
void max_heapify(int arr[], int size, int i) {
    int largest = MAX3(arr, i, left(i), right(i), size);
    if (largest != i) {
        swap(arr, i, largest);
        max_heapify(arr, size, largest);
    }
}

/*
 * to build the max heap, we just heapify the first half of the items
 * why not all? because the last half are leaves, and they will be 
 * percolated up the tree when their parents are heapified.
 */
void build_max_heap(int arr[], int length) {
    int i = 0;
    for (i = (length - 1)/2; i >= 0; i--) {
        max_heapify(arr, length, i);
    }
}


/*
 * In a built heap, the item at index 0 is always the biggest.
 * so to sort this array, just swap the item at 0 with the last item,
 * then fix the heap by heapifying the new item at 0.
 */
void heapsort(int arr[], int length) {
    int i = 0;
    build_max_heap(arr, length);
    for (i = length-1; i > 0; i--) {
        swap(arr, 0, i);
        max_heapify(arr, i, 0);
    }
}

