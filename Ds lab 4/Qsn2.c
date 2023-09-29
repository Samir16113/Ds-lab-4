#include<stdio.h>
#include<math.h>
	
int power(int b, int n, int m) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        int half_result = power(b, n/2, m);
        return (half_result * half_result) % m;
    } else {
        int half_result = power(b, floor(n/2), m);
        return (half_result * half_result * (b % m)) % m; 		//(power(b,floor(n/2),m)^2*%m*b%m)%m
    }
}

int main() {
    int b, n, m;
    printf("Enter base as b, n as exponent, and m as value for modulo: ");
    scanf("%d%d%d", &b, &n, &m);
    printf("The Output is %d", power(b, n, m));
    return 0;
}

