/**
 * Programmer: Muhammed Owais 
 * Desc: Returns Sum, Maximum, Minimum of an Array
 * Date: 10/24/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

void calculateDiscount(int purchaseAmount, int visited);
int main()
{
    int purchaseAmount, visited;
    printf("Enter the Total Purchase Amount: ");
    scanf("%d", &purchaseAmount);
    printf("Enter The Number of Visits: ");
    scanf("%d", &visited);
    calculateDiscount(purchaseAmount, visited);
}

void calculateDiscount(int purchaseAmount, int visited)
{
    if (visited > 10 && purchaseAmount >= 50)
    {
        purchaseAmount = purchaseAmount * 0.75;
    }
    else if (visited > 5 && purchaseAmount >= 30)
    {
        purchaseAmount = purchaseAmount * 0.9;
    }
    printf("FINAL AMOUNT: %d", purchaseAmount);
}