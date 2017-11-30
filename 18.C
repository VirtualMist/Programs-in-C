//Program to perform addition of two matrices
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************
#include<stdio.h>
#include<conio.h>

//************************Main Function*********************************

void main()
{
  int first[10][10],second[10][10],result[10][10];
  int i,r,c,j;
  clrscr();
  printf("Enter no. of rows and coloumn respectively of both the matrices: ");
  scanf("%d%d",&r,&c);
  printf("\nEnter elements of Matrix 1(row wise): ");
//*********************Logical Part************************************* 
 for(i=0;i<r;i++)
    {
	for(j=0;j<c;j++)
	  scanf("%d",&first[i][j]);
    }
  printf("\nEnter elements of Matrix 2(row wise): ");
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
	scanf("%d",&second[i][j]);
    }

   printf("\nResultant Matrix after addition is: ");
   for(i=0;i<r;i++)
   {
     printf("\n|\t");
       for(j=0;j<c;j++)
       {
	 result[i][j]=first[i][j]+second[i][j];
	 printf("%d\t",result[i][j]);
       }
     printf("\t|");
   }
   getch();
}