/*Q01. Write a C program to add two numbers using pointers.*/

#include <stdio.h>
int main(){
    int n1, n2, *p1,*p2;
    printf("Enter 1st integer: ");
    scanf("%d", &n1);
    p1 = &n1;
    printf("Enter 2nd integer: ");
    scanf("%d", &n2);
    p2 = &n2;
    //sum the values using value at address
    printf("Sum of 2 numbers: %d", *p1 + *p2);
    return 0;
}
