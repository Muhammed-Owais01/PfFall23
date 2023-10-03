/**
 * Programmer: Muhammed Owais 
 * Desc: Printing Fibonacci Series and Sum of 3,5,7
 * Date: 10/03/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int main() {
	int k = 1;
	int sum = 0;
	int a = 1, b = 1;
	printf("1 ");
	for (int i = 0; k <= 10000; i++) {
		printf("%d ", k);
		k = a + b;
		if ((k % 3 == 0) || (k % 5 == 0) || (k % 7 == 0)) {
			sum = sum + k;
		}
		a = b; 
		b = k;
	}
	printf("\nThe sum is: %d", sum);
	return 1;
}