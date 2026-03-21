#include<stdio.h>

void merge(int arr[], int left, int mid, int right) {
    int ll = mid - left + 1;
    int rl = right - mid;

    int tl[ll], tr[rl];

    // Copy data to temp arrays
    for(int i = 0; i < ll; i++) {
        tl[i] = arr[left + i];
    }
    for(int j = 0; j < rl; j++) {
        tr[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    // Merge temp arrays
    while(i < ll && j < rl) {
        if(tl[i] <= tr[j]) {
            arr[k] = tl[i];
            i++;
        } else {
            arr[k] = tr[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while(i < ll) {
        arr[k++] = tl[i++];
    }

    while(j < rl) {
        arr[k++] = tr[j++];
    }
}

void divide(int arr[], int left, int right) {
    if(left < right) {
        int mid = (left + right) / 2;

        divide(arr, left, mid);
        divide(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {25, 12, 31, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    divide(arr, 0, n - 1);

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
