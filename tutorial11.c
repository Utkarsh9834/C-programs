#include<stdio.h>

int main()
{
    int age;
    printf("Enter ur age\n");
    scanf("%d", &age);
    switch (age) {
    case 30:
    printf(" age is 30\n");
        break;
    case 50:
    printf(" age is 50\n");
        break;
    case 60:
    printf(" age is 60\n");
        break;
    
    default:
        printf("age is not 30 ,50.60\n");
    }
    // printf("hw");
    return 0;
}