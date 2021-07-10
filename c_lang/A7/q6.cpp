/*6. Write a C program to reverse an array using pointers.*/

#include <stdio.h>

//void reverse ()

int main (){
    int arr[100], n;
    int *EndPtr;
    
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nBefore reversing: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    //point the last element address to pointer 
    EndPtr = arr + (n - 1);

    printf("\nAfter reversing: ");
    for (int i = n; i > 0; i--){
        printf("%d ", *EndPtr);
        EndPtr--;
    }
    return 0;
    
}
