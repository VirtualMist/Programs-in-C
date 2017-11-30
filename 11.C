//Program to check whether a no. is armstrong no. or not
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************

#include<stdio.h>
#include<conio.h>
#include<math.h>

//************************Main Function*********************************

void main()
{
  int num,len=0,temp1,sum=0,rem,temp2;
  clrscr();
  printf("Enter any number: ");
  scanf("%d",&num);
  temp1=num;

//*********************Logical Part*************************************

  while(temp1)
  {
    temp1/=10;
    ++len;
  }
  temp2=num;
  while(temp2)
  {
    rem=temp2%10;
    sum+=pow(rem,len);
    temp2/=10;
  }

  if(sum==num)
  printf("\n%d is an armstrong number.",num);
  else
  printf("\n%d is not an armstrong number.",num);
  getch();

}