// #include <stdio.h>
// void main()
// {
//    int j,i,n;
//    printf("Input upto the table number starting from 1 : ");
//    scanf("%d",&n);
//    printf("Multiplication table from 1 to %d \n",n);
//    for(i=1;i<=10;i++)
//    {
//      for(j=1;j<=n;j++)
//      {
//       // if (j<=n-1)
//        //    printf("%dx%d = %d, ",j,i,i*j);
//      //     else
// 	    printf("%dx%d = %d",j,i,i*j);

//       }
//      printf("\n");
//     }
// } 
#include<stdio.h>

void main()
{
  int i,n,sum=1;
  printf("Enter the number\n");
  scanf("%d",&n);
 // printf("the odd number are\n");
  for ( i = 1; i <= n; i++)
  {
    //printf("%d",2*i);
    sum=sum*i;
  }
   //printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum);
    printf("the factorial of %d is:%d\n",n,sum);
    return 0;
}