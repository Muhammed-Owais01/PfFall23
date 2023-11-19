/**
 * Programmer: Muhammed Owais 
 * Desc: Fibonacci using recursion
 * Date: 31/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int fibbo(int n);
int main(){
	int n;
	printf("N: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){	
		printf("%d ", fibbo(i));
	}
}

int fibbo(int n){
	if (n == 0){
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return fibbo(n-1) + fibbo(n-2);
	}
}



