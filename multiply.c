#include <stdio.h>

int main() {
    int num1, num2, product;
    
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    product = num1 * num2;
    
    printf("Product = %d\n", product);

    return 0;
}