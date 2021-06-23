/*Write a C program to right rotate an array by n postions.*/

#include <stdio.h>
int main(){
    int arr[50], i, j, n, temp, pos;
    printf("Enter the number the elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the number of position to rotate: ");
    scanf("%d", &pos);
    /*right rotation*/
    for (i = 1; i <= pos; i++){    
    /*store the last value in a temporary variable*/
        temp = arr[n-1];
        for (j = n-2; j >= 0; j--){
            arr[j+1] = arr[j];
        }
        arr[0] = temp;
    }
    printf("Right roatation by %d position: ", pos);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
