//Program to add two nos. using user defined function
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************

#include<stdio.h>
#include<conio.h>

int add(int,int);		//Function declaration

//************************Main Function*********************************

void main()
{
  int num1,num2,sum;
  clrscr();
  printf("Enter two numbers: ");
  scanf("%d%d",&num1,&num2);
  printf("\n%d+%d=%d",num1,num2,add(num1,num2));
  getch();
}

//******************User Defined Function******************************

int add(int a,int b)
{

//*********************Logical Part*************************************
  return a+b;
}