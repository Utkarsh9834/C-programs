#include <stdio.h>

int main()
{
    int a, b;
    int jadoo;
    printf("enter the number1 and number2\n");
    scanf("%d%d", &a, &b);
    printf("enter the value\n");
    scanf("%d", &jadoo);
    switch (jadoo)
    {
    case 1:
        printf("add of %d and %d is:%d", a, b, a + b);
        break;
    case 2:
        printf("sub of %d and %d is:%d", a, b, a - b);
        break;
    case 3:
        printf("mul of %d and %d is:%d", a, b, a * b);
        break;
    case 4:
        printf("div of %d and %d is:%d", a, b, a / b);
        break;

    default:
        printf("invalid");
        break;
    }
    return 0;
}