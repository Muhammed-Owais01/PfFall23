/**
 * Programmer: Muhammed Owais 
 * Desc: Product of two numbers using addition and recursion
 * Date: 31/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int product(int a, int b);
int main(){
	int a,b;
	printf("Enter Number 1: ");
	scanf("%d", &a);
	printf("Enter Number 2: ");
	scanf("%d", &b);
	printf("%d",product(a,b));
}

int product(int a, int b){
	if (a == 0){
		return a;
	}
	if (b == 1){
		return a;
	}
	else{
		return a + product(a, b-1);
	}
}
