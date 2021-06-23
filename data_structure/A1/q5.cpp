// Write a C Program to Find the Largest Two Numbers in a given Array
     
#include <stdio.h>
int main ()

    {

        int array[100], n = 0, i = 0, l1 = 0, l2 = 0, temp = 0;

        printf ("Enter the size of the array\n");
        scanf ("%d", &n);


        printf ("Enter the elements\n");

        for (i = 0; i < n; i++)
        {
            scanf ("%d", &array[i]);
        }
        
		printf ("\n");

        l1 = array[0];
        l2 = array[1];

        if (l1 < l2)
        {
            temp = l1;
            l1 = l2;
            l2 = temp;
        }

        for (int i = 2; i < n; i++)
        {
            if (array[i] > l1)

            {
                l2 = l1;
                l1 = array[i];

            }
            else if (array[i] > l2 && array[i] != l1)
            {

                l2 = array[i];

            }
        }

     

        printf ("The FIRST largest = %d\n", l1);

        printf ("THE SECOND largest = %d\n", l2);


    }
