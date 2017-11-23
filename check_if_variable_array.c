#include<stdio.h>
 
int main()
{
  int M = 2;
  int arr[M][M] = {0}; // Trying to initialize all values as 0
  int i, j;
  for (i = 0; i < M; i++)
  {
    for (j = 0; j < M; j++)
       printf ("%d ", arr[i][j]);
    printf("\n");
  }
  return 0;
}
