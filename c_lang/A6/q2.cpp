/*Q02. Write a C program to copy one string to another string.*/

#include <stdio.h>

int main(){
    char arr1[50], arr2[50];
    int i;
    printf("Enter string: ");
    scanf("%[^\n]s", arr1);
    for (i = 0; arr1[i] != '\0'; i++)
        arr2[i] = arr1[i];
    printf("Copied string: %s", arr2);
    return 0;
}
