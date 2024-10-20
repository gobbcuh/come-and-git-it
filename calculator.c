#include <stdio.h>

int main()
{
    int firstNum, secondNum, sumNum, diffNum, productNum, quotientNum;

    printf("Enter first number: ");
    scanf("%d", &firstNum);

    printf("Enter second number: ");
    scanf("%d", &secondNum);

    sumNum = firstNum + secondNum;
    diffNum = firstNum - secondNum;
    productNum  = firstNum * secondNum;
    quotientNum = firstNum / secondNum;

    printf("%d + %d = %d", firstNum, secondNum, sumNum);
    printf("\n%d - %d = %d", firstNum, secondNum, diffNum);
    printf("\n%d x %d = %d", firstNum, secondNum, productNum);
    printf("\n%d / %d = %d", firstNum, secondNum, quotientNum);
}