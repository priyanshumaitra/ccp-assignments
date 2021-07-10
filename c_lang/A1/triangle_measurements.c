#include<stdio.h>
main(){
int base,height,area;
	printf("Enter the base of the triangle: ");
	scanf("%d",&base);
	printf("Enter the height of the triangle: ");
	scanf("%d",&height);
	area=(base*height)/2;
	printf("Area of the triangle is %d\n",area);
}
