#include <stdio.h>
int main()
{
  int mat1[2][2] = {{2, 3}, {3, 6}};
  int mat2[2][2] = {{1, 5}, {7, 2}};
  int result[2][2];

  printf("Multiplication of matrices is :- \n");
  for (int i = 0; i <= 1; i++)
  {
    for (int j = 0; j <= 1; j++)
    {
      result[i][j] = 0;
      for (int k = 0; k <= 1; k++)
      {
        result[i][j] += mat1[i][k] * mat2[k][j];
      }
      printf("%d\t", result[i][j]);
    }
    printf("\n");
  }
  return 0;
}