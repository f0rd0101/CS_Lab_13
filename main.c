#include <stdio.h>

double recursiveSum(int k) {
    if (k == 1)
        return 1.0 / 2;
    return (2.0 * k - 1) / (2.0 * k) + recursiveSum(k - 1);
}

int main() {
    int n;
    printf("Введіть n: ");
    scanf("%d", &n);

    double result = recursiveSum(n);
    printf("Сума: %.5lf\n", result);

    return 0;
}
