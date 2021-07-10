// Q16.Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

#include<stdio.h>
int main(){
	float s1,s2,s3;
	printf("Enter three sides of triangle:\n");
	scanf("%f%f%f",&s1,&s2,&s3);
	if(s1==s2 && s2==s3){
		printf("This is Equilateral Triangle\n");
	}
	else if(s1==s2 || s2==s3 || s1==s3){
		printf("This is Isosceles Triangle\n");

	}
	else
	{
		printf("This is Scalene Trangle\n");
	}
}


