#include<stdio.h>
int
main ()
{
  int a[] = { 1, 2, 3, 4, 5 };
  for (int i = 0; i < 5; i++)
    {
      printf ("%d\n", a[i] * a[i]);
    }
  return 0;
}
