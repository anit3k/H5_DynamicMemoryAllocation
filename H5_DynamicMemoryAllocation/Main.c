#include <stdio.h>
#include <stdlib.h>

//int main() {
//	int* ptr = (int*)malloc(sizeof(int));
//	if (ptr != NULL) {
//		*ptr = 42;
//		printf("Value: %d\n", *ptr);
//		free(ptr);
//	}
//	printf("Value: %d\n", *ptr);
//
//	return 0;
//}


int main() {
    int* arr; // Declare a pointer to an integer
    int size = 5; // Number of elements in the array

    // Allocate memory for an array of 5 integers
    arr = (int*)malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < size; i++) {
        arr[i] = i * 10;
    }

    // Print the values
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Remember to free the allocated memory when it's no longer needed
    free(arr);

    return 0;
}
