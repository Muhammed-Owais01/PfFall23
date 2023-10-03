/**
 * Programmer: Muhammed Owais 
 * Desc: LCM and GCD of two numbers
 * Date: 10/03/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int main() {
	int n1, n2, n, smallest = 0, largest = 0;
	printf("Enter first number: ");
	scanf("%d", &n1);
	printf("Enter second number: "); 
	scanf("%d", &n2);
	int i = 2;
	while (smallest == 0) {
		if ((n1 * i) % n2 == 0) {
			smallest = n1 * i;
		}
		i++;
	}
	i = 1;
	if (n1>n2) {
		n = n1;
	} else {
		n = n2;
	}
	while (i < n) {
		if (n1 % i == 0 && n2 % i == 0) {
			if (largest < i) {
				largest = i;
			}
		}
		i++;
	}
	printf("LCM: %d, GCD: %d", smallest, largest);
	return 1;
}