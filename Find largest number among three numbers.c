/*  C Program to find largest number among three numbers  */

#include <stdio.h>

int main()
{
    int a,b,c;
    int largest;

    printf("Enter first number :: ");
    scanf("%d",&a);
    printf("\nEnter Second number :: ");
    scanf("%d",&b);
    printf("\nEnter third number :: ");
    scanf("%d",&c);

    if(a>b && a>c)
        largest=a;
    else if(b>a && b>c)
        largest=b;
    else
        largest=c;

    printf("\nLargest number is = %d \n",largest);

    return 0;
}

/*
OUTPUT : 
Enter first number :: 4

Enter Second number :: 5

Enter third number :: 2

Largest number is = 5
*/
