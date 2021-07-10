/*Q15.Write a C program to left rotate an array by n positions.*/

#include <stdio.h>
int main(){
    int arr[50], i, j, n, temp, pos;
    printf("Enter the Number the elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the number of position to rotate: ");
    scanf("%d", &pos);
    /*left rotation*/
    for (i = 1; i <= pos; i++){    
    /*store the 1st value in a temporary variable*/
        temp = arr[0];
        for (j = 1; j < n; j++){
            arr[j-1] = arr[j];
        }
        arr[n-1] = temp;
    }
    printf("Left rotation by %d position: ", pos);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
