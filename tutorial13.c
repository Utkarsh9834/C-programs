#include<stdio.h>

int main()
{
    int num ,index =2;
    printf("Enter a number\n");
    scanf("%d",&num);

    do
    {
       printf("%d\n",index);
       index=index+2;
    } while (index<22);
    
    return 0;
}