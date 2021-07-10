/*5.QR01. Write a C program to find power of any number using recursion.*/

#include <stdio.h>

int power (int, int);

int main(){
    int num1, num2;
    printf("Enter base number: ");
    scanf("%d", &num1);
    printf("Enter power number: ");
    scanf("%d", &num2);
    printf("%d to the power %d is %d", num1, num2, power(num1, num2));
    return 0;
}

int power (int x, int y){
    if (y == 0)
        return 1;
    if (y == 1)
        return x;
    else
        return (x * power(x, y-1));
}
