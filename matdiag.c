#include<stdio.h>
int
main ()
{
  int i, j, a[3][3];
  printf ("enter the matrix");
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
      printf ("\n");
    }
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  if (i == j || (i + j) == 2)
	    printf ("%d ", a[i][j]);
	  else
	    printf (" ");
	}
      printf ("\n");
    }
  return 0;
}
