//Program to construct a menu using switch for different puposes
//Developed and Copyright © by A.K Mishra(ak.virtualmist.com)

//*************************Header Files*********************************

#include<stdio.h>
#include<conio.h>

//************************Main Function*********************************

void main()
{
   int ch,a,b;
   float si,p,r,t,area;
   clrscr();
   printf("Welcome To The Program Menu"
	  "\n\n1.Sum of two numbers"
	  "\n2.Negative or Positive Number Check"
	  "\n3.Simple Interest"
	  "\n4.Area Of Circle"
	  "\n5.Exit"
	  "\n\nEnter your Choice(1-5): ");
   scanf("%d",&ch);

//*********************Logical Part*************************************

   switch(ch)
   {
     case 1: printf("\n\nEnter two numbers to add: ");
		scanf("%d%d",&a,&b);
		printf("\n%d + %d = %d",a,b,a+b);
		getch();
		break;

     case 2: printf("\n\nEnter Any no. to check its Positivity/Negativity: ");
		scanf("%d",&a);
		if(a>0)
		printf("\n%d is a positive number",a);
		else
		printf("\n%d is a negative number",a);
		getch();
		break;

     case 3: printf("\n\nEnter the value of P, R and T to Calculate S.I: ");
		scanf("%f%f%f",&p,&r,&t);
		si=(p*r*t)/100;
		printf("\nThe simple Interest will be: %f",si);
		getch();
		break;

     case 4: printf("\n\nEnter radius to calculate area of the circle: ");
		scanf("%f",&r);
		area=3.14*r*r;
		printf("Area of the circle will be: %f",area);
		getch();
		break;

     case 5: printf("\n\nEnter any key to exit.........");
		getch();
		exit(0);
     default: printf("\n\nWrong Input.....Terminating....");
		break;
   }

getch();
}