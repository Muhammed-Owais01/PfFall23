#include <stdio.h>

int main() {
	char word;
	printf("Input a single character: ");
	scanf(" %c", &word);
	if (word >= 'a' && word <= 'z') {
		printf("Small Alphabet!");
	} else if (word >= 'A' && word <= 'Z') {
		printf("Capital Alphabet!");
	} else if (word >= '0' && word <= '9') {
		printf("Digit!");
	} else {
		printf("Special Character!");
	}
	return 0;
}