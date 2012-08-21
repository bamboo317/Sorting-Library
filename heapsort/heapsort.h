/*
 * heapsort.h
 *
 * definitions for the heapsort algorithm.
 */

void max_heapify (int arr[], int size, int i);
void min_heapify (int arr[], int size, int i);

void build_max_heap(int arr[], int length);
void build_min_heap(int arr[], int length);

void heapsort(int arr[], int length);

/*
 * priority queue
 */

void insert(int arr[], int x);
int maximum(int arr[]);
int extract_max(int arr[]);
void increase_key(int arr[], int x, int key);
