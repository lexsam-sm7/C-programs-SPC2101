/*
Name: Kuria Sammy Mwangi
Reg no: CT101/G/26462/25
Description:Function to calculate fahrenheit to celcius
*/
#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius;
}

int main() {
    float fahrenheit, celsius;

    // Ask the user for temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Call the function
    celsius = convertToCelsius(fahrenheit);

    // Display the result
    printf("Temperature in Celsius: %.2f°C\n", celsius);

    return 0;
}