/**
 * Programmer: Muhammed Owais 
 * Desc: Finding factorial using recursion
 * Date: 31/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int factorial(int n);
int main(){
	int n;
	printf("Enter A Number To Find Factorial Of: ");
	scanf("%d", &n);
	n = factorial(n);
	printf("Factorial is %d",n);
}

int factorial(int n){
	if (n == 0){
		return 1;
	}
	if (n == 1){
		return 1;
	}
	else {
		n = n * factorial(n-1);
	}
	return n;
}
