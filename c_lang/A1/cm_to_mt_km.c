#include<stdio.h>
main()
{
	float cm,meter,km;
	printf("Enter length in centimeter: ");
	scanf("%f",&cm);
	meter = (float)cm/100;
	km = (float)cm/100000;
	printf("Length in meter is %.4f meter\n",meter);
	printf("Length in kilometer is %.4f kilometer\n",km);
}
