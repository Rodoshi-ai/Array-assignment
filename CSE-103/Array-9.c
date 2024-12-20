#include <stdio.h>

int main() {
    int n;
    int highestOdd = -1;
    int highestEven = -1;
    int num;


    printf("Enter the number of elements: ");
    scanf("%d", &n);


    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            if (num > highestEven) {
                highestEven = num;
            }
        } else {
            if (num > highestOdd) {
                highestOdd = num;
            }
        }
    }

    if (highestOdd != -1) {
        printf("The highest odd value is: %d\n", highestOdd);
    } else {
        printf("No odd numbers entered.\n");
    }

    if (highestEven != -1) {
        printf("The highest even value is: %d\n", highestEven);
    } else {
        printf("No even numbers entered.\n");
    }

    return 0;
}
