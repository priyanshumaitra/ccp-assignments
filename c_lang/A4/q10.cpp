/* Q10.Write a C program to merge two array to third array.*/

#include <stdio.h>
int main(){
    int arr1[50], arr2[50], arr3[50];
    int i, j, n1, n2;
    printf("Enter the number of elements in 1st Array: ");
    scanf("%d", &n1);
    printf("Enter the number of elements in 2nd Array: ");
    scanf("%d", &n2);
    /*Read elements in 1st array*/
    printf("Enter the elements in 1st Array: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    /*Read elements in 2nd array*/
    printf("Enter the elements in 2nd Array: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);
    /*merge two array*/
    for (i = 0; i < n1; i++)
        arr3[i] = arr1[i];
    for (j = 0; j < n2; j++){
        arr3[i] = arr2[j]; 
        i++;
    }
    printf("Merged Array is: ");
    for (i = 0; i < n1+n2; i++)
        printf("%d ", arr3[i]);
    printf("\n");
    return 0;
    
}
