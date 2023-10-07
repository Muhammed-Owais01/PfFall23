/**
 * Programmer: Muhammed Owais 
 * Desc: Minimum and Maximum Number in an Array
 * Date: 10/07/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int main() {
	int n, a, small, large;
	printf("Input the numbers of elements: ");
	scanf("%d", &n);
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		printf("Enter Number %d: ", i+1);
		scanf("%d", &a);
		arr[i] = a;
	}
	small = arr[0];
	large = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] < small) {
			small = arr[i];
		} else if (arr[i] > large) {
			large = arr[i];
		}
	}
	printf("Minimum Number: %d\nMaximum Number: %d", small, large );
	return 1;
}