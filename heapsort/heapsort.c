/*
 * heapsort.c
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

void max_heapify(int arr[], int size, int i) {
    int l=left(i), r=right(i);
    int largest;
    if (l < size && arr[l] > arr[i]) largest = l; 
    else largest = i;
    if (r < size && arr[r] > arr[largest]) largest = r;
    if (largest != i) {
        int tmp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = tmp;
        max_heapify(arr, size, largest);
    }
}

void build_max_heap(int arr[], int length) {
    int i = (length - 1)/2;
    for (i = (length - 1)/2; i >= 0; i--) {
        max_heapify(arr, length, i);
    }
}

void heapsort(int arr[], int length) {
    int i = 0;
    build_max_heap(arr, length);
    for (i = length-1; i > 0; i--) {
        int tmp = arr[0];
        arr[0] = arr[i];
        arr[i] = tmp;        
        max_heapify(arr, i, 0);
    }
}

