/*  C program to calculate Gross Salary of an employee  */

#include <stdio.h>
 
int main()
{
  
    char name[30];
    float basic, hra, da, pf, gross;
 
    printf("Enter name: ");
    gets(name);
 
    printf("Enter Basic Salary: ");
    scanf("%f",&basic);
    printf("Enter HRA: ");
    scanf("%f",&hra);
    printf("Enter D.A.: ");
    scanf("%f",&da);
     
    /*pf automatic calculated 12%*/
    pf= (basic*12)/100;
 
    gross=basic+da+hra+pf;
 
    printf("\nName: %s \nBASIC: %f \nHRA: %f \nDA: %f \nPF: %f \n***GROSS SALARY: %f ***",name,basic,hra,da,pf,gross);
     
    return 0;
}

/*
OUTPUT : 
Enter name: Raj
    Enter Basic Salary: 23000
    Enter HRA: 9500
    Enter D.A.: 9500

    Name: Raj
    BASIC: 23000.000000
    HRA: 9500.000000
    DA: 9500.000000
    PF: 2760.000000
    ***GROSS SALARY: 44760.000000 ***

  */
