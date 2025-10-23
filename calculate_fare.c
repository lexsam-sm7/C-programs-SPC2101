/*
Name : Kuria sammy mwangi 
Reg no:CT101/G/26462/25
Description : function to calculateFare
*/
#include <stdio.h>

// Function to calculate fare
int calculateFare(int distance) {
    int fareRate = 50;   // fare rate per kilometer in KSh
    int totalFare = distance * fareRate;
    return totalFare;
}

int main() {
    int distance;
    
    printf("Enter distance traveled (in km): ");
    scanf("%d", &distance);
    
    int fare = calculateFare(distance);
    printf("Total fare = KSh. %d\n", fare);
    
    return 0;
}