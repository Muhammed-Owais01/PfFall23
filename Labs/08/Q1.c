/**
 * Programmer: Muhammed Owais 
 * Desc: Swaping two numbers using a function
 * Date: 24/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

void swapIntegers(int *a, int *b);
int main()
{
    int a, b;
    printf("Integer 1: ");
    scanf("%d", &a);
    printf("Integer 2: ");
    scanf("%d", &b);
    swapIntegers(&a,&b);
    printf("Integer 1: %d\nInteger 2: %d", a,b);
}

void swapIntegers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}