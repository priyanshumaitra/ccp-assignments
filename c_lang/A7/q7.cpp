/*7. Write a C program to search an element in array using pointers.*/

#include <stdio.h>
int main(){
    int arr[100], n, *ptr;
    int key, i, flag = 0;
    printf("Enter no. elements: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    ptr = arr;
    for (i = 0; i < n; i++){
        if ( *ptr == key){
            flag = 1;
            break;
        }
        ptr++;
    }
    if (flag == 1)
        printf("%d is found", key);
    else    
        printf("%d not found", key);
    return 0;
}
