#include <stdio.h>

int main() {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if (n % 3 == 0) {
		printf("This number is a multiple of 3");
	} else {
		printf("This number is not a multiple of 3");
	}
	return 1;
}