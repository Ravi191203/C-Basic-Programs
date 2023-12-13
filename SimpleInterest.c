/*  C Program to calculate simple interest  */

#include<stdio.h>
#include<conio.h>

int main()
{
  float principal,rate,time;
  float simpleInterest;
  printf("Enter the principal amount :: ");
  scanf("%f",&principal);
  printf("\nEnter the rate of interest :: ");
  scanf("%f",&rate);
  printf("\nEnter the time duration :: ");
  scanf("%f",&time);
  simpleInterest=(principal*rate*time)/100;
  printf("\nThe simple interest is %f \n",simpleInterest);

  return 0;
}
OUTPUT : :
Enter the principal amount :: 385000

Enter the rate of interest :: 13.89

Enter the time duration :: 4

The simple interest is 213906.000000
