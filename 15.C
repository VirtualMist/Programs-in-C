//Program to find max and min no. in an array
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************

#include<stdio.h>
#include<conio.h>

//************************Main Function*********************************

void main()
{
  int a[10],i=0,max,min;
  clrscr();
  printf("Enter 10 Elements of the array: ");

//*********************Logical Part*************************************

  while(i<10)
  {
    scanf("%d",&a[i]);
    i++;
  }
  max=a[0];
  min=a[0];
  for(i=0;i<9;i++)
  {
    if(max<a[i])
    max=a[i];
    if(min>a[i])
    min=a[i];
  }
  printf("\nMax Value is %d and Min value is %d",max,min);
  getch();
}