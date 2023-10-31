#include <stdio.h>
#include <stdlib.h>
/**
 * Programmer: Muhammed Owais 
 * Desc: Printing values in array and its address using pointers
 * Date: 31/10/2023
 * Roll-No: 23K-0047
 */ 
int main(){
	int n, i;
	printf("Enter Array Size: ");
	scanf("%d", &n);
	char arr[n];
	int arr1[n];
	long long int arr2[n];
	for(i = 0; i < n; i++){
		printf("Enter Value %d char Array: ", i);
		scanf(" %c", &arr[i]);
		printf("Enter Value %d int Array: ", i);
		scanf("%d", &arr1[i]);
		printf("Enter Value %d long long int Array: ", i);
		scanf("%lli", &arr2[i]);
	}
	char *ptr = &arr[0]; 
	int *ptr1 = &arr1[0]; 
	long long int *ptr2 = &arr2[0];
	for(i = 0; i < n; i++){
		// ptr+i goes to the next address of char by adding +1 byte, *(ptr+i) prints r value at that address 
		printf("Address %d of char Array: %p, Value: %c\n", i, ptr+i, *(ptr+i));
		// ptr1+i goes to the next address of int by adding +4 byte, *(ptr1+i) prints r value at that address 
		printf("Address %d of int Array: %p, Value: %d\n", i, ptr1+i, *(ptr1+i));
		// ptr2+i goes to the next address of long long int by adding +8 bytes, *(ptr2+i) prints r value at that address 
		printf("Address %d of long long int Array: %p, Value: %lli\n", i, ptr2+i, *(ptr2+i));
	}
	
}
