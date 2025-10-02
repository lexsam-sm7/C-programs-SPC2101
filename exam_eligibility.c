/*
Name:Sammy Mwangi 
Reg no:CT101/G/26462/25
Description:checking exam eligibily
*/
#include <stdio.h>
  int main ()
  {
  int attendance,average_mark;
  
  printf("enter your attendance:\n");
  scanf("%d" ,&attendance);
  
  printf("enter your average_marks:\n");
  scanf("%d" ,&average_mark);
  
  
  if (attendance>=75 && average_mark>=40)
  {
  printf("\nYou are eligibe to sit for the final exam.\n");
  }
  else
  {
  	printf("\nYou are not eligile.\n");
  }
  
  
  return 0;
  
  }