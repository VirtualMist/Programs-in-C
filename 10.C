//Program to check whether any number is prime or not
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************

#include<stdio.h>
#include<conio.h>

//************************Main Function*********************************

void main()
{
 int num,i=2,res=1;
 clrscr();
 printf("Enter any number to check it: ");
 scanf("%d",&num);

//*********************Logical Part*************************************

 while(i<num/2)
 {
   if(num%i==0)
   {
     res=0;
     break;
   }
   i++;
 }
if(res==1 && num>=2)
{
 printf("\n%d is Prime.",num);
}
else
printf("%d is not prime",num);
getch();
}


