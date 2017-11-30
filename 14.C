//Program to reverse one array element to another
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************

#include<stdio.h>
#include<conio.h>

//************************Main Function*********************************

void main()
{
  int a[10],b[10],i=0,j;
  clrscr();
  printf("Enter 10 elements of an array: ");

//*********************Logical Part*************************************

  while(i<10)
  {
     scanf("%d",&a[i]);
     ++i;
  }
  printf("\nOriginal Array { ");
  for(i=0,j=9;i<10;i++,j--)
  {
     printf("%d, ",a[i]);
     b[j]=a[i];
  }
  printf("}\nReversed Array { ");
  for(i=0;i<10;i++)
  {
    printf("%d, ",b[i]);
  }
  printf("}");
  getch();

}