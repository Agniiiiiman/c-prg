#include <stdio.h>

void insertion(int arr[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main() {
    int n, i;

    printf("ENTER NUMBER OF ELEMENTS IN ARRAY ");
    scanf("%d", &n);

    int arr[n]; 

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    insertion(arr, n);

    printf("THE FINAL ARRAY IS  ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
