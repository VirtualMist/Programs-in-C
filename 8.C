//Program to print the desired pattern
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************

#include<stdio.h>
#include<conio.h>

//************************Main Function*********************************

void main()
{
   int c=0,i,j;
   clrscr();

   printf("\t\tPattern 1\n");


//*********************Logical Part*************************************

   for(i=5;i>0;i--)
     {
       for(j=5;j>=i;j--)
	 printf("%d\t",j);
       printf("\n");
     }

   printf("\n\t\tPattern 2\n");

   for(i=1;i<=5;i++)
   {
     for(j=1;j<=i;j++)
       printf("%d\t",++c);
     printf("\n");
   }
   getch();
}
