/*5.QF04. Write a C program to check whether a number is even or odd using functions.*/

#include <stdio.h>

int evenOdd(int);
int main(){
    int num;
    printf("Enter integer: ");
    scanf("%d", &num);
    evenOdd(num);
    return 0;
}

int evenOdd(int n){
    if (n % 2 == 0)
        return printf("%d is EVEN\n", n);
    else
        return printf("%d is ODD\n", n);

}
