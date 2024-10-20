#include <stdio.h>

int main()
{
    int firstNum, secondNum, sumNum, diffNum;

    printf("Enter first number: ");
    scanf("%d", &firstNum);

    printf("Enter second number: ");
    scanf("%d", &secondNum);

    sumNum = firstNum + secondNum;
    diffNum = firstNum - secondNum;

    printf("%d + %d = %d", firstNum, secondNum, sumNum);
    printf("\n%d - %d = %d", firstNum, secondNum, diffNum);
}