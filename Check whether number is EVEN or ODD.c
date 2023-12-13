/*  C Program to check whether number is EVEN or ODD  */

#include <stdio.h>
int main()
{

    int num;

    printf("Enter an integer number :: ");
    scanf("%d",&num);

    /*If number is divisible by 2 then number
    is EVEN otherwise number is ODD*/

    if(num%2==0)
        printf("\n%d is an EVEN number.",num);
    else
        printf("\n%d is an ODD number.",num);

    return 0;
}

/*
OUTPUT : 
First Run:

    Enter an integer number: 27
    
    27 is an ODD number.

Second Run:

    Enter an integer number: 88
    
    88 is an EVEN number.

  */
