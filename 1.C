//Program to perform Addition, Multiplication, Subtraction and Division
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************

#include <stdio.h>
#include<conio.h>

//****************************Main Function*****************************

int main()
{
  double a, b, res=1;
  char c;
  clrscr();
  printf("Enter value 1 : ");
  scanf("%lf",&a);
  printf("\nEnter desired symbol of operation (/ , * , + , -) : ");
  scanf(" %s",&c);
  printf("%lf\nEnter value 2 : ");
  scanf("%lf",&b);

//*********************Logical Part*************************************
  switch(c)
  {
    case '+' : res=(a+b); break;
    case '/' : res=(a/b); break;
    case '-' : res=(a-b); break;
    case '*' : res=(a*b); break;
    default : printf("\nWrong Operator Input. Terminating program");
	      getch();
	      exit(-1);
  }

  printf("\nThe result will be : %lf",res);

getch();

return 0;
}
