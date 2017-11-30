//Program to find the sum of 10 numbers by using array
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************

#include<stdio.h>
#include<conio.h>

//************************Main Function*********************************

void main()
{
  int i=0,num[10],sum=0;
  clrscr();
  printf("Enter any 10 numbers to compute their sum: ");

//*********************Logical Part*************************************

  while(i<10)
  {
    printf("\nEnter element %d: ",i);
    scanf("%d",&num[i]);
    sum+=num[i];
    ++i;
  }
  printf("\nThe sum of all numbers is: %d",sum);
  getch();

}