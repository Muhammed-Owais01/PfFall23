/**
 * Programmer: Muhammed Owais 
 * Desc: Simple Calculator using functions
 * Date: 10/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

void add(int num1, int num2);
void subtract(int num1, int num2);
void multiply(int num1, int num2);
void divide(int num1, int num2);
int main()
{
    int num1,num2;
    char op;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter an Operator: ");
    scanf(" %c", &op);
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    switch (op)
    {
    case '+':
        add(num1,num2);
        break;
    case '-':
        subtract(num1,num2);
        break;
    case '*':
        multiply(num1,num2);
        break;
    case '/':
        divide(num1,num2);
        break;
    }
}

void add(int num1, int num2)
{
    printf("%d", num1+num2);
}

void subtract(int num1, int num2)
{
    printf("%d", num1-num2);
}

void multiply(int num1, int num2)
{
    printf("%d", num1*num2);
}

void divide(int num1, int num2)
{
    printf("%d", num1/num2);
}
