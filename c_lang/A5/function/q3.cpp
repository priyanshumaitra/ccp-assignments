/*5.QF03. Write a C program to find maximum and minimum between two numbers using functions.*/

#include <stdio.h>

void findMax();

int main(){
    findMax();
    return 0;
}

void findMax(){
    int num1, num2;
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    if (num1 > num2)
        printf("Maximum: %d \nMinimum:  %d \n", num1,num2);
    else
        printf("Maximum: %d \nMinimum:  %d \n", num2, num1);

}
