//Program to print Fibonacci series up to given term
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************

#include<stdio.h>
#include<conio.h>

//************************Main Function*********************************

void main()
{
  int next=0,old=1,previous=0,term;
  clrscr();
  printf("Enter the term upto which you want fibonacci series: ");
  scanf("%d",&term);

//*********************Logical Part*************************************

  while(term)
  {
    printf("  %d",next);
    next=previous+old;
    old=previous;
    previous=next;
    term--;
  }
  getch();
}