/*4.Q12.Write a C program to put even and odd elements of array in two separate array.*/

#include <stdio.h>
int main(){
    int arr[50], eve[50], odd[50];
    int i, n, j = 0, k = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    /*iterate the number one by one*/
    for (i = 0; i < n; i++){
        /*check the number even or odd*/
        if (arr[i] % 2 == 0){
            /*store only even numbers into seperate array*/
                eve[j] = arr[i];
                j++;
            }
        else{
            /*store only odd numbers into seperate array*/
                odd[k] = arr[i];
                k++;        
        }
    }
    printf("Even elements are: ");
    j = 0;
    while (eve[j] > 0){
        printf("%d ", eve[j]);
        j++;
    }
    printf("\n");
    printf("Odd elements are: ");
    k = 0;
    while (odd[k] > 0){
        printf("%d ", odd[k]);
        k++;
    }
    return 0;
}
