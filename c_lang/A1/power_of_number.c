#include<stdio.h>
#include<math.h>
main(){
int a,b,power;
printf("Enter the base value that you want to Calculate: ");
scanf("%d",&a);
printf("Enter the power value you want to Calculate: ");
scanf("%d",&b);
power=pow(a,b);
printf("%d to the power %d is %d\n",a,b,power);
}
