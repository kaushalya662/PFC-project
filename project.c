#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float div(int a, int b) { return (float)a / b; }
int mod(int a, int b) { return a % b; }

int main() {
    int a, b, ch;

    printf("Mini Calculator\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    switch (ch) {
        case 1: printf("Result = %d", add(a, b)); break;
        case 2: printf("Result = %d", sub(a, b)); break;
        case 3: printf("Result = %d", mul(a, b)); break;
        case 4: 
            if (b != 0)
                printf("Result = %.2f", div(a, b));
            else
                printf("Division not possible");
            break;
        case 5: printf("Result = %d", mod(a, b)); break;
        default: printf("Invalid choice");
    }

    return 0;
}