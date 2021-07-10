//Write a C Program to multiply of Two Dimensional Arrays

#include <stdio.h>

int main()
{
  int r1, c1, r2, c2, i, j, k, sum = 0;
  int m1[10][10], m2[10][10], rm[10][10];

  printf("Number of rows in first matrix : ");
  scanf("%d", &r1);

  printf("Number of columns in first matrix : ");
  scanf("%d", &c1);

  printf("Elements of first matrix : \n");

  for (i = 0; i < r1; i++)
    for (j = 0; j < c1; j++)
      scanf("%d", &m1[i][j]);

  printf("Number of rows of second matrix : ");
  scanf("%d", &r2);

  printf("Number of columns of second matrix : ");
  scanf("%d", &c2);

  if (c1 != r2)
    printf("Matrices with entered orders cannot be multiplied.\n");
  else
  {
    printf("Elements of second matrix : \n");

    for (i = 0; i < r2; i++)
      for (j = 0; j < c2; j++)
        scanf("%d", &m2[i][j]);

    for (i = 0; i < r1; i++) {
      for (j = 0; j < c2; j++) {
        for (k = 0; k < r2; k++) {
          sum = sum + m1[i][k]*m2[k][j];
        }

        rm[i][j] = sum;
        sum = 0;
      }
    }

    printf("After Multiplication, the result is : \n");

    for (i = 0; i < r1; i++) {
      for (j = 0; j < c2; j++)
        printf("%d\t", rm[i][j]);

      printf("\n");
    }
  }

  return 0;
}
