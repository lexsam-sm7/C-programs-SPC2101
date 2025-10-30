/*
Name: Sammy Mwangi Kuria
Reg no: CT101/G/26462/25
Description: 1D_array
*/

#include<stdio.h>
int main(){

int i, total=0;
int revenue[7];
float average;

for(i=0; i<7; i++){
printf("Enter revenue for day &d:", i+1);
scanf("%d", &revenue[i]);
total += revenue[i];
}
average = total/7.0;

printf("Total weekly revenue = %d\n",total);
printf("Average daily revenue = %.2f\n",average);

return 0;
}


    