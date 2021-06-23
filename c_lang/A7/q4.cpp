/*Q04. Write a C program to copy one array to another using pointers.*/

#include <stdio.h>
int main(){
    int i, num = 0, *p1, *p2;
    int arr1[100], arr2[100];
    printf("Enter no. of elements: ");
    scanf("%d", &num);
    printf("Enter elements: ");
    //set the base array address to pointer
    p1 = arr1; 
    p2 = arr2;
    //read value to 1st array using pointer
    for (i = 0; i < num; i++){
        scanf("%d", p1);
        //copy value one-by-one using value at address
       *p2 = *p1;
        p1 && p2++;
    }
    //reset the base array address of 2nd pointer
    p2 = arr2;
    printf("copied array is: \n");
    //print the values of 2nd array
    for (i = 0; i < num; i++){
        printf("%d ", *p2);
        p2++;
    }
    printf("\n");
    return 0;
}
