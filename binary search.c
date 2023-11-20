#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, key;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *array = (int *)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (array[mid] == key) {
            printf("Element found at index %d\n", mid);
            free(array);
            return 0;
        } else if (array[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("Element not found\n");
    free(array);
    return 0;
}
