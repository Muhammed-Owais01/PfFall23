/**
 * Programmer: Muhammed Owais 
 * Desc: Shift numbers in array by d location to the left
 * Date: 10/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int arr[200];
void inputArray(int a);
void reverseArray(int a, int b);
void printArray(int a);
int main() {
	int n, d;
	printf("Enter array size: ");
	scanf("%d", &n);
	printf("Enter the left shift value d: ");
	scanf("%d", &d);
	inputArray(n);
	reverseArray(n, d);
	printArray(n);
	
}

void inputArray(int a) {
	int b;
	for(int i = 0; i < a; i++){
		printf("Enter Value %d: ", i+1);
		scanf("%d", &b);
		arr[i] = b;
	}	
}

void reverseArray(int a, int b) {
	int i = 0;
	int temp;
	while (i < b) {
		int c = a-1;
		while (c > 0) {
			temp = arr[c-1];
			arr[c-1] = arr[a-1];
			arr[a-1] = temp;
			c--;
		}
		i++;
	}
}

void printArray(int a) {
	for(int i = 0; i < a; i++) {
		printf("%d ", arr[i]);
	}
}