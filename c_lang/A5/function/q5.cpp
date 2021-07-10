/*5.QF05. Write a C program to check whether a number is prime or not using function.*/

#include <stdio.h>

void isPrime(int);

int main(){
    int num;
    printf("Enter integer: ");
    scanf("%d", &num);
    isPrime(num);
    return 0;
}
void isPrime(int n){
    int i, flag = 0;
    
    if (n == 1)
        printf("1 is neither Prime nor Composite");
    else{
        for (i = 2; i < n; i++){
            if (n % i == 0){
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            printf("%d is Non-Prime", n);
        else
            printf("%d is Prime", n);
    }
}
