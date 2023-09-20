#include <stdio.h>

int main() {
	int n = -1;
	do {
		printf("Input value in the range 0-1000: ");
		scanf("%d", &n);
	}
	while (n < 0);
	if (n>=0 && n<=100) {
		printf("Evening!");
	} else if (n>100 && n<500) {
		printf("Lightning!");
	} else {
		printf("Sunshine!");
	}
	return 1;

}