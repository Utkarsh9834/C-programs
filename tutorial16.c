#include <stdio.h>
//break and continue statement
int main()
{
    int age, i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter your age :%d\n",i );
        scanf("%d", &age);
        if (age > 10)
        {
            break;//change it to continue and break to check diffrence
            
        }
        printf("chal nikal\n");
    }

    return 0;
}