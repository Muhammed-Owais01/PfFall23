#include <stdio.h>

int main() {
	int n;
	printf("Enter a 8-bit number: ");
	scanf("%d", &n);
	int digit[8];
	int i = 0;
	while (i < 8) {
		digit[i] = n % 10;
		n = n / 10;
		i++;
	}
	if (digit[1] == 1) {
		digit[1] = 0;
	} 
	if (digit[3] == 1) {
		digit[3] = 0;
	}
	i = 7;
	while (i >= 0) {
		printf("%d", digit[i]);
		i--;
	}	
}