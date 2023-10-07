/**
 * Programmer: Muhammed Owais 
 * Desc: Sum of User Input Array
 * Date: 10/07/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int main() {
	int n, a, sum = 0;
	printf("Input the numbers of elements: ");
	scanf("%d", &n);
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &a);
		arr[i] = a;
	}
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	printf("Sum: %d", sum);
	return 1;
}