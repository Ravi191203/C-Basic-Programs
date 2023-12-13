/*  C program to find Sum and Average of two numbers  */

#include <stdio.h>

int main()
{
    int a,b,sum;
    float avg;

    printf("Enter first number :");
    scanf("%d",&a);
    printf("\nEnter second number :");
    scanf("%d",&b);

    sum=a+b;
    avg= (float)(a+b)/2;

    printf("\nSum of %d and %d is = %d\n",a,b,sum);
    printf("\nAverage of %d and %d is = %f\n",a,b,avg);

    return 0;
}

/*
OUTPUT : 
Enter first number :23

Enter second number :45

Sum of 23 and 45 is = 68

Average of 23 and 45 is = 34.000000
  */
