//Program to find factorial using user defined function
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************

#include<stdio.h>
#include<conio.h>

void fact(int);

//************************Main Function*********************************

void main()
{
  int num;
  clrscr();
  printf("Enter any number to calculate its factorial: ");
  scanf("%d",&num);
  fact(num);
  getch();
}

//******************User Defined Function******************************

void fact(int a)
{
  int i,factorial=1;

//*********************Logical Part*************************************

  if(a>=2)
  {
    for(i=2;i<=a;i++)
    {
      factorial*=i;
    }
    printf("\nFactorial of %d is %d",a,factorial);
  }
  else
  if(a==0||a==1)
  {
    printf("\nFactorial of %d is 1",a);
  }
  else printf("\nWrong Input.....Terminating");
}
