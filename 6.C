//Program to reverse a number and store it in a variable
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************

#include<stdio.h>
#include<conio.h>
#include<math.h>

//************************Main Function*********************************

void main()
{
int org_num,temp_num,remainder,rev_num=0;
clrscr();
printf("Enter any no. to get its reverse: ");
scanf("%d",&org_num);
temp_num=org_num;

//*********************Logical Part*************************************

while(temp_num)
{
  remainder=temp_num%10;
  rev_num=rev_num*10+remainder;
  temp_num/=10;
}

printf("\nThe reverse of %d is %d.",org_num,rev_num);

getch();
}