/**
 * Programmer: Muhammed Owais 
 * Desc: GCD of two numbers using recursion
 * Date: 31/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int GCD(int a, int b);
int main(){
	int a, b, i;
	printf("Enter Numbers a b to find GCD of: ");
	scanf("%d %d", &a, &b);
	if (b > a){
		int temp = a;
		b = a;
		a = temp;
	}
	for (i = 0; i < a/2; i++){
		
	}
	printf("Using Recursion: %d", GCD(a,b));
}

int GCD(int a, int b){
	if (b == 0){
		return a;
	}
	else {
		return GCD(b, a % b);
	}
}
