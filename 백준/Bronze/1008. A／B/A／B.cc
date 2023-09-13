#include <stdio.h>

int main () {
    int num1, num2;
    double result;
    scanf("%d %d", &num1, &num2);
    result = double(num1)/double(num2);
    printf("%.9f", result);
    return 0;
}