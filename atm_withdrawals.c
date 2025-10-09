/*
Name: Valentine Wanja Patrick 
Reg no: CT101/G/26458/25
Description: ATM withdrawals 
*/

//pre proccessor directive
#include<stdio.h>

//variable declaration
int main(){
	double balance;
	double withdraw ;

// introduction 
printf("Hello, Welcome to Chema ATM services. \n");

//Prompt user to enter account balance 
printf("Enter your account balance:");
scanf("%lf",& balance);

//Validation of user input
if(balance<=0){ 
printf("Invalid input, Please try again.\n");
return 1;
}

//while loop program
while( balance>0){
    printf("\nYour current balance is:%.2lf\n",balance);
    printf("Enter amount to withdraw:");
    scanf("%lf",& withdraw);

if(withdraw>balance){
	printf("Insufficient funds!please try again.\n");
	continue;	
}
printf("Withdrawal of %.2lf successful!\n",withdraw);

balance=balance-withdraw;
printf("Remaining balance is:%.2lf\n",balance);
}
printf("\n Balance is zero.No more further withdrawal possible. Thank you.\n");

	return 0;
}
		