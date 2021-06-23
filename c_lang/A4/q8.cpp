/*4.Q08.Write a C program to insert an element in an array.*/

#include <stdio.h>
int main(){
    int arr[50];
	int i, n, key, pos;
	printf("Enter number of elements: ");
	scanf("%d", &n);

	printf("Enter elements in 1st array: ");
	/*Read elements*/
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);
    /*check if the position valid or not*/
    if (pos > 0 && pos <= n){
        printf("Enter the value want to insert: ");
        scanf("%d", &key);
        /*insertion logic*/
        for (i = n; i >= pos-1; i--)
            arr[i+1] = arr[i];
        /*initialise the key value into proper position*/
        arr[pos-1] = key; 
        printf("After insertion, array elements: ");
        for (i = 0; i <= n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    else
        printf("Invalid Position\n");

    return 0;
}
