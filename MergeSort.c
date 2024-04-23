#include<stdio.h>

void merge(int a[], int low, int high, int mid) {
    int b[5];
    int i, k;
    i = k = low;
    int j = mid + 1;

    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            b[k] = a[i];
            k++; 
            i++;
        } else {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid) {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= high) {
        b[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i <= high; i++) {
        a[i] = b[i];
    }
}

void mergesort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, high, mid);
    }
}

void printarr(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    printf("Enter the number of array elements: ");
    int n;
    scanf("%d", &n);

    int a[n];
    int i;
    printf("Enter array elements: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Original array:\n");
    printarr(a, n);
    mergesort(a, 0, n - 1);
    printf("After sorting:\n");
    printarr(a, n);

    return 0;
}

