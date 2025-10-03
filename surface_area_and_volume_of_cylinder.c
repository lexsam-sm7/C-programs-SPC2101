/*

Name  :    Sammy Mwangi

Reg no  :  CT/101/26462/25

Description:Calculating surface area and volume of a cylinder

*/

#include<stdio.h>
#include<math.h>

int main()

{
	float radius,height,pi,surface_area,volume;
	
	printf("enter your radius:");
	scanf("%f" ,&radius);
	printf("your radius is %.4f\n" ,radius);
	
	printf("enter your height:");
	scanf("%f" ,&height);
	printf("your height is %.4f\n" ,height);
	
	pi=3.142;
	
	surface_area =2*pi* pow(radius ,2) +2*pi*radius*height;
	printf("your surface_area is %.4f\n" ,surface_area);
	
	 volume=pi*pow(radius ,2)*height;
	printf("your volume is %.4f" ,volume);
	
	return 0;

}

