//#include<stdio.h>
//int sum(int a, int b);


//int main()
//{
  //  int a,b,c;
    //a=2;
    //b=5;
    //c=sum(a,b);
    //printf("the sum is%d\n",c);
    //return 0;

//}
#include<stdio.h>
int sum(int a, int b);
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}
int takenumber()
{
   int i;
    printf("enter a number");
    scanf("%d",i);
    return i ;
}

int main()
{
    int a,b,c;
    a=2;
    b=5;
   // c=sum(a,b);
    //printstar(7);
   // printf("the sum is%d\n",c);
   c=takenumber();
   printf("the number is%d\n",c);
    return 0;

}
