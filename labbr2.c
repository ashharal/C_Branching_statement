/*
WAP using switch case for arithmetic operation on two numbers, if user enters an operator as
choice, the appropriate operation should perform.
If user enters wrong choice appropriate message should get displayed.
i.e. + is for addition
-
is for subtraction
*/
#include<stdio.h>
int main()
{

char ch;
int a,b;

printf("enter '+' for addition:");
printf("enter '-' for substraction:");
//printf("enter '*' for multiplication:");
printf("enter '/' for division:");
scanf("%c",&ch);

printf("enter any two values");
scanf("%d%d",&a,&b);

switch(ch)

{
default: 
{
printf("you have selcted wrong choice");
}
case '+':
printf("addition of %d and %d is %d",a,b,(a+b));
break;

case '-':
printf("subtraction of %d and %d is %d",a,b,(a-b));
break;

case '*':
printf("multiplication %d and %d is %d",a,b,(a*b));
break;

case '/':
printf("division of %d and %d is %d",a,b,(a/b));
break;
}
return 0;
}


