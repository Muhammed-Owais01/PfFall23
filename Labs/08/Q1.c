/**
 * Programmer: Muhammed Owais 
 * Swaping two numbers using a function
 * Date: 24/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

void swapIntegers();
int main()
{
    swapIntegers();
}

void swapIntegers()
{
    int a,b;
    printf("Integer 1: ");
    scanf("%d", &a);
    printf("Integer 2: ");
    scanf("%d", &b);
    int temp = a;
    a = b;
    b = temp;
    printf("Integer 1: %d\n", a);
    printf("Integer 2: %d", b);
}