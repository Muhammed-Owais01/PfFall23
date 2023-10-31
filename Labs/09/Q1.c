/**
 * Programmer: Muhammed Owais 
 * Desc: Swaping two numbers using pointers in a function
 * Date: 31/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int j = 2, k = 5;
	printf("j = %d, k = %d\n", j,k);
	swap(&j,&k);
	printf("j = %d, k = %d\n", j,k);
	return 0;
}

/* The values are not swapped because the numbers are being passed by value, as in the r values are passed 
instead of l values that would allow number to be stored at that location
*/ 
