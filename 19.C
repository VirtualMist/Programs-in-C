//Program to transpose a matrix
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************

#include<stdio.h>
#include<conio.h>

//************************Main Function*********************************
void main()
{
  int original[10][10],transpose[10][10];
  int i,r,c,j;
  clrscr();

  printf("Enter no. of rows and coloumn respectively of the original matrix: ");
  scanf("%d%d",&r,&c);

  printf("\nEnter elements of original Matrix (row wise): ");

//*********************Logical Part*************************************
  for(i=0;i<r;i++)
    {
	for(j=0;j<c;j++)
	{
	  scanf("%d",&original[i][j]);
	  transpose[j][i]=original[i][j];
	}
    }

   printf("\nTranspose of entered Matrix is: ");

   for(i=0;i<c;i++)
   {
     printf("\n|\t");
       for(j=0;j<r;j++)
       {
	 printf("%d\t",transpose[i][j]);
       }
     printf("\t|");
   }


   getch();
}