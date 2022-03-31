#include<stdio.h>

int main()
{
    char s ;
    printf("Enter your number\n");
    scanf("%c", &s );
    switch (s)
    {
    case '1' :
       printf("soap is available \n");
       printf("we have two companies product\n");
       printf("First one is Santoor\n second is cinthol\n");
       break;
    case '2' :
       printf("oil is available \n");
       printf("we have two companies product\n");
       printf("First one is Assure\n second is Prachute\n");
       break;
    case '3' :
       printf("biscuit is available \n");
       printf("we have two companies product\n");
       printf("First one is Parle\n second is birtaniya\n");
       break;
    
    default :
       printf("shortage of product");
       break ;
    }
    return 0;
}