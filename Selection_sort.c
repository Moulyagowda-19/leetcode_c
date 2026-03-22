#include <stdio.h>

void display(int arr[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    int n;

    printf("Enter the total number of students in class\n");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter the height of student %d\n", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Student's height order before sorting:\n");
    display(arr, n);

    // Selection Sort
    for(int i = 0; i < n - 1; i++){
        int min = i;

        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min])
                min = j;
        }

        // swap
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

        printf("Height order of students after iteration %d\n", i + 1);
        display(arr, n);
    }

    printf("After final comparison of all students, the height order becomes:\n");
    display(arr, n);

    return 0;
}
