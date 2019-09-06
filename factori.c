#include<stdio.h>
int
factor (int a)
{
  int i;
  int fact = 1;
  for (i = a; i >= 1; i--)
    {
      fact = fact * i;
    }
  printf ("%d", fact);
  return fact;
}

int
main ()
{
  int x;
  printf ("enter the number");
  scanf ("%d", &x);
  factor (x);
  return 0;
}
