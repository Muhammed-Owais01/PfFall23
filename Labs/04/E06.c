/*
 * Name: Muhammed Owais
 * Date: 9/11/2023
 * Description: This prints * in pattern of n.
 * Related Files:
 */

//--Include Files--//
#include <stdio.h>

int main() {
	int n; //Stores n
	int i = 1; 
	int j;
	int val;
	int num1 = 1; // stores the number of middle spaces to give
	printf("Enter a number: ");
	scanf("%d", &n);
	// Loop runs until n, so if n is 3, 3 rows will be printed
	while (i <= n) {
		// Initialized each time so that the space count is reset.
		j = 1; 
		// n-1 reduces the number of spaces to print each row
		while (j <= n-i) {
			printf(" ");
			j = j + 1;
		}
		printf("*");
		// Prints the spaces in middle, the middle spaces start from row 2.
		if (i >= 2){
			val = 0;
			while (val < num1) {
				val = val + 1;
				printf(" ");
			}
			printf("*");
			// Increased each time as number of middle spaces are increasing. 
			num1 = num1 + 2;
		}
		i = i + 1;
		printf("\n");
	}
	i = n;
	// The number of middle spaces are 2 less than the max one before, also -4 because +2 was added when loop ran finally.
	num1 = num1 - 4;
	while (i > 1) {
		j = 1;
		while (j <= n-(i-1)) {
			printf(" ");
			j = j + 1;
		}
		printf("*");
		if (i > 2){
			val = 0;
			while (val < num1) {
				val = val + 1;
				printf(" ");
			}
			printf("*");
			num1 = num1 - 2;
		}
		i = i - 1;
		printf("\n");
	}
	return 1;
}
