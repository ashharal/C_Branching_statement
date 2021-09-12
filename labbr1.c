/*
. WAP using following menus-
Choice-1: Accept number and find out square and cube.
Choice-2: Check whether the given year is LEAP or not.
If user enters wrong choice appropriate message should get displayed.

*/

#include<stdio.h>
int choice;

int main()

{
int n, year;
 printf("enter 1 for calculate sqaure and cube of number");
 printf("enter 2 for check whether the year is leap or not");
 scanf("%d",&choice);
 switch(choice)
 {
 default:
 printf("you have entered wrong choice");
 break;
 
 case 1:
 
 printf("enter the value of any number:");
 scanf("%d",&n);
 
 printf("\n sqaure of %d is %d and cube of %d is %d ",n,n*n,n,n*n*n);
 break;
 
 case 2:
  printf("enter the year ");
  scanf("%d",&year);
  if(year%4==0)
  {
  printf("%d is leap year",year);
  }
  else
  {
  printf("%d is not leap year",year);
  
  }
  break;
 
 
 }
 return 0;
 
 }
 
