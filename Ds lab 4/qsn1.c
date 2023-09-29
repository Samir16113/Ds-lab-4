#include <stdio.h>

double power(double a, int n) {
    double result = 1.0;
    int i;
    
    for (i = 0; i < n; i++) {
        result *= a;
    }
    
    return result;
}

int main() {
    double a;
    int n;

    printf("Enter the base (a): ");
    scanf("%lf", &a);

    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    double result = power(a, n);
    
    printf("%.2f raised to the power of %d is %.2f\n", a, n, result);

    return 0;
}

