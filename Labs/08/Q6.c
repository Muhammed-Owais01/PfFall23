/**
 * Programmer: Muhammed Owais 
 * Desc: Returns Sum, Maximum, Minimum of an Array
 * Date: 10/24/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

void processArray(int size, int arr[50]);
int main()
{
    int size, arr[50];
    printf("Enter Array Size: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter Number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    processArray(size, arr);

}

void processArray(int size, int arr[50])
{
    int sum = 0;
    int large = arr[0];
    int small = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
        else if (arr[i] < small)
        {
            small = arr[i];
        }
        sum += arr[i];
    }
    printf("Array Sum: %d\nMaximum Value: %d\nMinimum Value: %d", sum,large,small);
}