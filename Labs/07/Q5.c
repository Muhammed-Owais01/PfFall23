/**
 * Programmer: Muhammed Owais 
 * Desc: Prints 4 digits if even, 2 if odd.
 * Date: 10/03/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h> 

int main() {
	int i;
	for (i = 0; i <=6; i++){
		if (i % 2 == 0) {
			printf("%d %d %d %d\n", i, i, i, i);
		} else {
			printf("  %d %d   \n", i, i);
		}
	}
	return 1;
}