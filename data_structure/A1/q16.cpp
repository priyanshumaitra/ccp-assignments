// Write a C Program to Insert an Element in a Specified position in a given Array

#include <stdio.h>
int main()
{
   int array[100], pos, c, n, value;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter elements\n");
 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
 
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &pos);
 
   printf("Enter the value to insert\n");
   scanf("%d", &value);
 
   for (c = n - 1; c >= pos - 1; c--)
      array[c+1] = array[c];
 
   array[pos-1] = value;
 
   printf("Resultant array is\n");
 
   for (c = 0; c <= n; c++)
      printf("%d\n", array[c]);
 
   return 0;
}
