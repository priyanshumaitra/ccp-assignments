//Write a C program to enter two angles of a triangle and find the third angle.


#include<stdio.h>
main(){
	float a1,a2,a3;
	printf("Enter 1st angle of triangle: ");
	scanf("%f",&a1);
	printf("Enter 2nd angle of triangle: ");
	scanf("%f",&a2);
	a3=180-(a1+a2);
	printf("3rd angle of the triangle is %.2f degrees\n",a3);
}

