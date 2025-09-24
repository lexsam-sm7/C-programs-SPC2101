/*

Name  :    Sammy Mwangi

Reg no  :  CT/101/26462/25

Description:Qualifications for a loan user inputs

*/

#include<stdio.h>
int main()
{
   int age,income;
	
  printf("enter your age:");
  scanf("%d" ,&age);
  
  printf("enter your annual income in ksh:");
  scanf("%d" ,&income);
  
  if (age>=21 ,income>=21000)
  {
	  printf("congratulations,you qualify for a loan\n");
  }
  else
  {
  	printf("Unfortunatly,we are unable to offer you a loan at this time\n");
  }
  	
  return 0;

}
