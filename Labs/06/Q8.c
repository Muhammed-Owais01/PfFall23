/**
 * Programmer: Muhammed Owais 
 * Desc: Reverse Array
 * Date: 10/07/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int main() {
	int n, a;
	printf("Input the numbers of elements: ");
	scanf("%d", &n);
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &a);
		arr[i] = a;
	}
	printf("Reverse Array: ");
	for (int i = n-1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	return 1;
}