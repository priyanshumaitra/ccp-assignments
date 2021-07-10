#include<stdio.h>
main()
{
float cel,far;
printf("Enter temperature in fahrenheit: ");
scanf("%f",&far);
cel =(5*far-160)/9;
printf("Temperature in celsius: %.2f°c\n",cel);
}
