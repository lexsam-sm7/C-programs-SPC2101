  /*
  
  Name:Sammy Mwangi
  Reg no:CT101/G/26462/25
  Description:calculating compound intrest
  
  */
  
  #include <stdio.h>
  #iclude <math.h> 
  int main()
  
  {
  	float principle,rate,time,compounding_years,compound_intrest,final_amount;
  	printf("input your princple:");
  	scanf("%f" ,&principle);
  	printf("your principle is ksh %.2f\n" ,principle);
  	
  	printf("input your rate:");
  	scanf("%f" ,&rate);
  	printf("your rate is %.2f\n" ,rate);
  	
  	printf("input your time:");
  	scanf("%f" ,&time);
  	printf("your time is %.1f yrs\n" ,time);
  	
  	printf("input your compounding_years:");
  	scanf("%f" ,&compounding_years);
  	printf("your compounding_years is %f\n" ,compounding_years);
  	
  	final_amount = principle * pow((1+rate/100), time * compounding_years);
  	
  	compound_intrest =final_amount-principle;
  	
  	printf("your compound_intrest is ksh %.2f" ,compound_intrest);
  	
  	return 0;

  }

