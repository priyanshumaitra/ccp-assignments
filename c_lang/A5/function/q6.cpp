/*5.QF06. Write a program to check whether a number is an Armstrong number or not using function.*/

#include <stdio.h>
#include <math.h>

void isArmstrong (int);

int main(){
    int num;
    printf("Enter integer: ");
    scanf("%d", &num);
    isArmstrong(num);
    return 0;
}

void isArmstrong (int n){
    int temp, i = 0, rem;
    float result = 0.0;
    temp = n;
    while (temp != 0){
        temp /= 10;
        ++i;
    }
    temp = n;
    while (temp != 0){
        rem = temp % 10;
        result += pow(rem, i);
        temp /= 10;
    }
    if ((int)result == n)
        printf("armstrong number", n);
    else
        printf("NOT an armstrong number", n);
}
