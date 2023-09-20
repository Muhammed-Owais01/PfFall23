#include <stdio.h>

int main() {
	int n;
	printf("Enter a 8-bit number in 0s and 1s: ");
	scanf("%d", &n);
	int num1 = n / 10000;
	int num2 = n % 10000;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	printf("%d%d", num1,num2);
	return 1;
}