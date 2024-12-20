#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("The array must contain at least two elements.\n");
        return 1;
    }

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i++) {
        if (arr[i] % arr[i - 1] == 0) {
            count++;
        }
    }

    printf("Number of elements divisible by the immediate previous element: %d\n", count);

    return 0;
}
