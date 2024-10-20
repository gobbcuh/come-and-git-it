#include <stdio.h>

int main()
{
    int firstNum, secondNum, sumNum;

    printf("Enter first number: ");
    scanf("%d", &firstNum);

    printf("Enter second number: ");
    scanf("%d", &secondNum);

    sumNum = firstNum + secondNum;

    printf("%d + %d = %d", firstNum, secondNum, sumNum);
}