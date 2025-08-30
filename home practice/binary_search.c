#include <stdio.h>
int binary(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        return mid;
        else if (arr[mid] < key)
        low = mid + 1;
        else
        high = mid - 1;
    }
    return -1;
}
int main() {
    int arr[10];
    int n, key;

   
    printf("ENTER number of ELEMENTS OF ARRAY: ");
    scanf("%d", &n);

  
    printf("ENTER %d elements in array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

 
    printf("ENTER ELEMENT TO SEARCH FOR: ");
    scanf("%d", &key);

    int r = binary(arr, n, key);

    
    if (r != -1) {
        printf("THE ELEMENT IS PRESENT");
    } else {
        printf("THE ELEMENT IS NOT PRESENT ");
    }

    return 0;
}
