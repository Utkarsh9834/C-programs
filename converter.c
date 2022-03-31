#include <stdio.h>

int main()
{
    float num;
    int value;

    printf("Enter a number you want to convert\n");
    scanf("%f", &num);
    printf("Enter value 1 for converting km to m\n");
    printf("Enter value 2 for converting m to km\n");
    printf("Enter value 3 for converting cm to m\n");
    printf("Enter value 4 for converting m to cm\n");
    printf("enter the value\n");
    scanf("%d", &value);
    switch (value)
    {
    case 1:
        // km to m
        printf("%f kilometer = %f meter", num, num * 1000);
        break;
     case 2:
        // m to km
        printf("%f meter = %f kilometer", num, num / 1000);
        break;
    case 3:
        // cm to m
        printf("%f centimeter = %f meter", num, num / 100);
        break;
    case 4:
        // m to cm
        printf("%f meter = %f centimeter", num, num * 100);
        break;
       


        return 0;
    }
}