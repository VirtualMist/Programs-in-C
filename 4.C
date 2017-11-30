//Program to produce factorial of a given number
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************

#include<conio.h>
#include<stdio.h>

//************************Main Function*********************************

void main()
{
 int a,no,fact=1;
 clrscr();

 printf("Enter any no. to find its factorial: ");
 scanf("%d",&a);
 no=a;

//*********************Logical Part*************************************

 if(no>1)
 {
   while(a>1)
     {
       fact=fact*a;
       a--;
     }
     printf("\n The factorial of %d will be %d",no,fact);
 }
  else if(no==1||no==0)
    {
      printf("\nThe factorial of %d will be 1",no);
    }
  else
  printf("\nWrong Input");
  getch();

}