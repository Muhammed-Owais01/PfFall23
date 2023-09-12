/*
 * Name: Muhammed Owais
 * Date: 9/11/2023
 * Description: Summing square of n numbers.
 * Related Files:
 */

//--Include Files--//
#include <stdio.h>

int main() {
	int n;
	int sum = 0;
	int i = 0;
	int num;
	printf("This program prints the square of numbers\n");
	printf("Enter the amount of numbers you want to sum: ");
	scanf("%d", &n);
	while (i < n) {
		printf("Input a number: ");
		scanf("%d", &num);
		num = num * num;
		sum = sum + num;
		i = i + 1;
	}
	printf("Sum: %d", sum);
	return 1;
}