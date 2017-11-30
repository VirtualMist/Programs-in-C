//Program to check whether a no is palindrome or not
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************

#include<stdio.h>
#include<conio.h>


//************************Main Function*********************************

void main()
{
int org_num,temp_num,remainder,rev_num=0;
clrscr();
printf("Enter any no. to check its nature ");
scanf("%d",&org_num);

//****************************Finding The Reverse************************

temp_num=org_num;

//*********************Logical Part*************************************
while(temp_num)
{
  remainder=temp_num%10;
  rev_num=rev_num*10+remainder;
  temp_num/=10;
}
if(org_num==rev_num)
printf("\n The no. %d is a palindrome.",org_num);
else
printf("\n The no. %d is not a palindrome.",org_num);
getch();
}