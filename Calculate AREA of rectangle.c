/*  C Program to calculate AREA of a rectangle  */

#include<stdio.h>
#include<conio.h>

int main()
{
  int l,b;
  int area;
  printf("Enter the length of the rectangle :: ");
  scanf("%d",&l);
  printf("\nEnter the breadth of the rectangle :: ");
  scanf("%d",&b);
  area=l*b;
  printf("\nThe area of a rectangle is %d \n",area);
return 0;
}

/*
OUTPUT : :
Enter the length of the rectangle :: 5

Enter the breadth of the rectangle :: 6

The area of a rectangle is 30
*/
