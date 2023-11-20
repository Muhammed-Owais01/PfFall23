/**
 * Programmer: Muhammed Owais 
 * Desc: Swapping values using XOR and Pointers
 * Date: 20/11/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

void swap(int *a, int *b);
int main(){
	int a,b;
	printf("Enter A and B: ");
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("A:%d B:%d\n", a,b);
}

void swap(int *a, int *b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}