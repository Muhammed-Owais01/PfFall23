#include <stdio.h>

int main() {
	int n;
	printf("Enter a 8-bit number: ");
	scanf("%d", &n);
	int num7 = (n / 10) % 10;
	num7 = 0;
	int num4 = (n / 10000) % 10;
	num4 = 0;
	int num1 = n / 100000;
	int num8 = n % 10;
	int num5 = (n % 10000) / 100;
	printf("%d%d%d%d%d", num1, num4, num5, num7, num8);
	return 1;
}