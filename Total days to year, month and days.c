/*  C program to convert Total days to year, month and days  */

#include <stdio.h>

int main(void)
{
    int d,y,m,nd;
    printf("Enter number of days :: ");
    scanf("%d",&d);
    y=d/365;
    d=d%365;
    m=d/30;
    nd=d%30;
    printf("\n%d years, %d months, %d days\n",y,m,nd);
    return 0;
}

/*
OUTPUT : 
Enter number of days :: 560

1 years, 6 months, 15 days
*/
