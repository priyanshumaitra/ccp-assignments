/*5.QF07. Write a C Program to check a number is perfect number or not using functions.*/

#include <stdio.h>

void isPerfect(int);

int main(){
    int n;
    printf("Enter integer: ");
    scanf("%d", &n);
    isPerfect(n);
    return 0;
}

void isPerfect(int num){
    int sum = 0, i;
    for (i = 1; i <= num/2; i++){
    //a number does not have any proper positive divisor greater than num/2
        if (num % i == 0)
            sum += i;
    }
    if (sum == num)
        printf("%d is a perfect number", num);
    else
        printf("%d is not a perfect number", num);
}
