/*
Name:Sammy Mwangi kuria
Reg no:CT101/G/26462/25
Description :function_to_calculate_total_bill
*/

#include<stdio.h>


//function prototype 
float calculate_electric_bill(int units){
float bill = 0;

if (units <= 100){
bill=units * 10;
}
else if(units <= 200){
bill=(100 * 10)+((units - 100) * 15);
}
else{
bill=(100 * 10)+(100 * 15)+((units - 200) * 20);
}
return bill;
}
int main(){
int units;
float total_bill;

printf("Enter units:");
scanf("%d", &units);

total_bill=calculate_electric_bill(units);

printf("Total_electric_bill:KES%.2f\n",total_bill);

return 0;
}