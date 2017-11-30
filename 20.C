//Program to perform multiplication of two matrices
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************

#include<stdio.h>
#include<conio.h>


//************************Main Function*********************************
void main()
{
  int first[10][10],second[10][10],result[10][10];
  int r1,c1,r2,c2,i=0,j,k,sum=0;
  clrscr();
  printf("Enter no. of rows and coloumn respectively of matrix 1: ");
  scanf("%d%d",&r1,&c1);
  printf("\nEnter no. of rows and column respectively of matrix 2: ");
  scanf("%d%d",&r2,&c2);
  if(c1==r2)
   {
     printf("\nEnter Matrix 1(row wise): ");
     while(i<r1)
     {
	for(j=0;j<c1;j++)
	scanf("%d",&first[i][j]);
	++i;
     }
     printf("\nEnter Matrix 2(row wise): ");
     for(i=0;i<r2;i++)
     {
       for(j=0;j<c2;j++)
       scanf("%d",&second[i][j]);

     }

//*********************Logical Part*************************************

   printf("Resultant matrix product is: ");
   for(i=0;i<r1;i++)
     {
       printf("\n|  ");
	for(j=0;j<c2;j++)
	{
	    for(k=0;k<c1;k++)
	      sum=sum+(first[i][k]*second[k][j]);
	  result[i][j]=sum; sum=0;
	  printf("%d ",result[i][j]);
	}
	printf("  |");
     }
   }
   else printf("\nMatrices cann't be multiplied! Terminating.....");
   getch();
}