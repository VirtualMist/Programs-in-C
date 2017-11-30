//Program to Add digit of input number
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*****************Header File******************************************

#include<stdio.h>
#include<conio.h>

//************************Main Function*********************************

void main()
{
  int a,sum=0,no,org_no;
  clrscr();
  printf("Enter any no. ");
  scanf("%d",&a);
  org_no=a;

//*********************Logical Part*************************************

  while(a)
  {
    no=a%10;
    a=a/10;
    sum=sum+no;
  }
   printf("\n Sum of all digits of %d will be %d",org_no,sum);
   getch();

}