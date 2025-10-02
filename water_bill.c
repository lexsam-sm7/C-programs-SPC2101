/*
Name:Sammy Mwangi 
Reg no:CT101/G/26462/25
Description:water bill
*/
#include <stdio.h>
  int main ()
  {
  	float units,total_water_bill;
  	
  	printf("Enter your units:");
  	scanf("%f" ,&units);
  	
  	if(units<=30)
	  {
	  total_water_bill=20*units;
	  }
     else if(units>=31&& units<=60)
	  {
      total_water_bill=25*units;
	  }
 
     else 
	  {
       total_water_bill=30*units;
	  }
	  
	  printf("\nYour total_water_bill is %.2f\n" ,total_water_bill);
	 
	  return 0;
  }