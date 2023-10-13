/**
 * Programmer: Muhammed Owais 
 * Desc: 2x2 Matrix Multiplication
 * Date: 10/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int main() {
	int rows = 2;
	int columns = 2;
	int sum = 0;
	int arr1[20][20], arr2[20][20], newarray[20];
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
		    printf("Enter Matrix 1 (%d,%d): ", i+1, j+1);
		    scanf("%d", &arr1[i][j]);
		}
	}
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
		    printf("Enter Matrix 2 (%d,%d): ", i+1, j+1);
		    scanf("%d", &arr2[i][j]);
		}
	}
	for(int i = 0; i < rows; i++) {
	    int newcol = 0;
	    while (newcol < column)
		for(int j = 0; j < columns; j++) {
				sum = sum + arr1[i][j] * arr2[j][i];
		}
	}
	
}
