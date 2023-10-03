/**
 * Programmer: Muhammed Owais 
 * Desc: Printing perfect number
 * Date: 10/03/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int main() {
	int n;
	int sum = 0;
	int i = 1;
	printf("Enter a number: ");
	scanf("%d", &n);
	while (i <= n/2) {
		if (n % i == 0) {
			sum = sum + i;
		} // end if
		i++;
	} // end while
	if (sum == n) {
		printf("%d is a perfect number", n);
	} else {
		printf("%d is not a perfect number", n);
	}
	return 1;
} //end main