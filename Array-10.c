#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, mean, variance = 0, stdDev;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    float marks[n];

    printf("Enter the marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    mean = sum / n;

    for (i = 0; i < n; i++) {
        variance += pow(marks[i] - mean, 2);
    }
    variance /= n;

    stdDev = sqrt(variance);

    printf("\nResults:\n");
    printf("Average (Mean): %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", stdDev);

    return 0;
}
