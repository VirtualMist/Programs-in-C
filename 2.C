//Program to check whether a no. is even or odd
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//***************Header Files******************************************

#include<stdio.h>
#include<conio.h>

//************************Main Function*********************************

void main()
{
  int a;
  clrscr();
  printf("Enter any no. ");
  scanf("%d",&a);

//****************************Logical Part*******************************

  (a%2==0)?printf("%d is an even no.",a):printf("%d is an odd no.");
  getch();
}