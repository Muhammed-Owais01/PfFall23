#include <stdio.h>

int main() {
	char ope;
	int num1, num2, sum;
	printf("Enter a number: ");
	scanf("%d", &num1);
	do {
		printf("Enter an operator: ");
		scanf(" %c", &ope);
	} 
	while (ope != '+' && ope != '-' && ope != '*' && ope != '/');
	printf("Enter another number: ");
	scanf("%d", &num2);
	switch(ope) {
		case '+':
			sum = num1 + num2;
			break;
		case '-':
			sum = num1 - num2;
			break;
		case '*':
			sum = num1 * num2;
			break;
		case '/':
			while (num2 == 0) {
				printf("Please enter a valid second number: ");
				scanf("%d", &num2);
			}
			sum = num1 / num2;
			break;
	}
	printf("Your Ans is: %d", sum);
	
}