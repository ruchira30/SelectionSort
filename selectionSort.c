#include <stdio.h>
#define size 5

void selectionSort(int arr[], int n);
void displayArray(int arr[], int n);

int main() {
    int arr[size] = {25, 7, 35, 8, 12};
    selectionSort(arr, size);
    displayArray(arr, size);
    return 0;
}

void selectionSort(int arr[], int n) {
    int i, j, smallest, temp;
    for (i = 0; i < n-1; i++) {
        smallest = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[smallest]) {
                smallest = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
}

void displayArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
