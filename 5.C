//Program to swap two nos. without using the third variable
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************

#include<stdio.h>
#include<conio.h>

//************************Main Function*********************************

void main()
{
int a,b;
clrscr();
printf("Enter any two nos:(a and b) ");
scanf("%d%d",&a,&b);

//*********************Logical Part*************************************

a=a+b;
b=a-b;
a=a-b;
printf("\nThe swapped values of a and b are a = %d and b = %d",a,b);
getch();
}