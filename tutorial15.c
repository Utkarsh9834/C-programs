#include <stdio.h>
void main()
{
   int i,n,sum=0;
   float avg;
   printf("Input Value of number : \n");
   for(i=0;i<=10;i++)
   {
    printf("number -: \t   %d",i);
     scanf("%d ",&n);
     sum+=n;
   }
   avg=sum/10.0;
   printf("The Sum of numbers is: %d\n and average is: %f \n",sum,avg);

}