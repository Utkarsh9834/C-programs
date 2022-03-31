#include <stdio.h>

int main()
{
    int maths;
    int science;
    printf("Enter your maths marks\n");
    scanf("%d", &maths);
    printf("Enter your science mark\n");
    scanf("%d", &science);
    // printf("your maths mark is %d\n your science marks is %d\n" , maths , science);
    if (maths >= 25)
    {
        printf("you have passed in maths exam\n");
        printf("you have recived price\n");
        if (science < 25)
        {
            printf("you have failed in science exam\n");
        }
    }
    if (science >= 25)
    {
        printf("you have passed in science  exam\n");
        printf("you have recived price\n");
        if (maths < 25)
        {
            printf("you have failed in maths");
        }
        }
}

//   else if (science >= 25)
//     {
//         printf("you have passed in science exam\n");
//         printf("you have recived price\n");
//     }
//     else if (maths < 25 && science > 25)
//     {
//         printf("you have passed in science exam");
//         printf("fail in maths exam");
//     }

//     else if (science < 25 && maths > 25)
//     {
//         printf("you hav passed in maths exam");
//         printf("fail in science exam");
//     }
//     else
//     {
//         printf("fail in exam");
//     }
//     return 0;