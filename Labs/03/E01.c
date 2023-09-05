// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int ans = 0;
    int num1 = 0;
    int num2 = 0;
    char ope = 'i';
    printf("This Is A Simple Arithmetic Calculator:  \n");
    printf("Enter The First Number: ");
    scanf("%d", &num1);
    printf("Enter an operator: ");
    scanf(" %c", &ope);
    printf("Enter The Second Number: ");
    scanf("%d", &num2);
    if (ope == '+') {
        ans = num1 + num2;
    }
    if (ope == '-') {
        ans = num1 - num2;
    }
    if (ope == '*') {
        ans = num1 * num2;
    }
    if (ope == '/') {
        ans = num1 / num2;
    }
    printf("Your ans is %d", ans);
    return 0;
}