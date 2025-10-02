/*
Name:Sammy Mwangi 
Reg no:CT101/G/26462/25
Description: buying data bundle  
*/
#include <stdio.h>
  int main ()
  {
  	int choice;
    printf("Select your data bundle:\n");
  	printf("1. 100MB @ 50KES\n");
    printf("2. 500MB @ 200KES\n");
    printf("3. 1GB   @ 350KES\n");
    printf("4. 2GB   @ 600KES\n");
    
    printf("Enter your choice(1-4):\t");
    scanf("%d" ,&choice);
    
    if(choice==1)
    {
	printf("\nYou selected 100MB.\nCost=50 KES\n");	
	}	
	
    else if(choice==2)
	{
	printf("\nYou selected 500MB.\nCost=200 KES\n");	
	}
    	
    
    else if(choice==3)
    {
	printf("\nYou selected 1GB.\nCost=350 KES\n");	
	}	
    
    else if(choice==4)
    {
	printf("\nYou selected 2GB.\nCost=600KES\n");
	}
    
    else
	{
		printf("\nInvalid choice\n");
	}
    return 0;
  }