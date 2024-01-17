#include<stdio.h>

int main() {
    int a[50], size, i, num, position;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    if (size <= 0 || size > 50) {
        printf("Invalid size");
        return 1;  // Return an error code
    }

    printf("Enter the elements of array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Elements in array are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    printf("\nEnter the data you want to insert: ");
    scanf("%d", &num);

    printf("Enter the position you want to insert on: ");
    scanf("%d", &position);

    if (position <= 0 || position > size + 1) {
        printf("Invalid position");
    } else {
        // Shift elements to make space for the new element
        for (i = size - 1; i >= position - 1; i--) {
            a[i + 1] = a[i];
        }

        // Insert the new element at the specified position
        a[position - 1] = num;
        size++;

        printf("The elements of array after insertion are: ");
        for (i = 0; i < size; i++) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}

