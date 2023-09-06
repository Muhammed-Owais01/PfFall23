// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float ans = 0;
    int num1 = 0;
    int num2 = 0;
    char ope = 'i';
    printf("This Is A Simple Arithmetic Calculator:  \n");
    printf("Enter The First Number: ");
    scanf("%d", &num1);
    do {
	printf("Enter an operator: ");
	scanf(" %c", &ope);	
     }
    while (ope != '+' && ope != '-' && ope !='*' && ope != '/');
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
	while (num2 == 0) {
		printf("Cannot divide by zero, please enter a new number: ");
		scanf("%d", &num2);
	}
        ans = num1 / num2;
    }
    printf("Your ans is %.3f", ans);
    return 0;
}