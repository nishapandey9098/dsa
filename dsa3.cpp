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

    printf("\nEnter the data you want to delete: ");
    scanf("%d", &num);

    printf("Enter the position you want to delete: ");
    scanf("%d", &position);

    if (position <= 0 || position > size) {
        printf("Invalid position");
    } else {
       // Shift elements to make space for the new element
int found = 0;
for (i = position - 1; i < size - 1; i++) {
    a[i] = a[i+1];
    found = 1;
}
size--;

if (!found) {
    printf("Element not found at the specified position\n");
} else {
    printf("The elements of the array after deletion are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
}
}
}

