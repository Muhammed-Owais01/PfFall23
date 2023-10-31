/**
 * Programmer: Muhammed Owais 
 * Desc: Reversing an array using pointers
 * Date: 31/10/2023
 * Roll-No: 23K-0047
 */ 
 #include <stdio.h>

void reverse(int *arr, int size){
	int i;
	for (i = 0; i < size/2; i++){
		int temp = *(arr+i);
		*(arr+i) = *(arr+size-1-i);
		*(arr+size-1-i) = temp;
	}
}

int main(){
	int arr[10];
	int i;
	for(i = 0; i < 10; i++){
		printf("Enter Number %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	reverse(&arr[0], 10);
	for(i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
}
