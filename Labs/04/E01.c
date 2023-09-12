/*
 * Name: Muhammed Owais
 * Date: 9/11/2023
 * Description: This prints * in pattern of n.
 * Related Files:
 */

//--Include Files--//
#include <stdio.h>

int main() {
	int n;
	int i = 0;
	int j;
	printf("Enter a number: ");
	scanf("%d", &n);
	while (i < n){
		j = 0;
		while (j <= i) {
			printf("*");
			j = j + 1;
		}
		printf("\n");
		i = i + 1;
	}
	return 1;
} //end main