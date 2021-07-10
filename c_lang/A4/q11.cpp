/*4.Q11.Write a C program to find reverse of an array.*/

#include <stdio.h>
int main(){
    int arr[50], i, n;
    printf("Enter the no of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    /*start the loop in reverse to print reversed array*/
    printf("Reversed Array is: ");
    for (i = n-1; i >= 0; i--)
        printf("%d ", arr[i]);
    return 0;
}
