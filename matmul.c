#include<stdio.h>

void input (int a[][10])
{
  int i, j;
  for (i = 0; i < 2; i++)
    {

      for (j = 0; j < 2; j++)
	{
	  scanf ("%d ", &a[i][j]);
	}
//printf("\n");
      
    }
return ;
}

  void mul (int a[][10], int b[][10], int m1, int n1, int m2, int n2)
  {
    int i, j, k, prod[10][10];
    int sum = 0;
    for (i = 0; i < m1; i++)
      {
	for (j = 0; j < n2; j++)
	  {
	    for (k = 0; k < n1; k++)
	      {
		sum = sum + a[i][k] * b[k][j];
	      }
	    prod[i][j] = sum;
	    sum = 0;
	  }
      }
for(i = 0; i < m1; i++)
{
for (j = 0; j < n2; j++)
	  {
    printf ("%d", prod[i][j]);
}
}
return ;
  }


  int main ()
  {
    int m1, n1, m2, n2;
    int a[10][10], b[10][10];

	printf ("\nEnter the number of rows and colums of a");
	scanf ("\n%d %d ", &m1,&n1);
	printf ("\nEnter the number of rows and colums of b");
  	scanf ("\n%d %d ", &m2,&n2);
    if (n1 == m2)
      {
	input (a);
	input (b);
	mul (a, b, m1, n1, m2, n2);
      }
    else
      {
	printf ("Matrices cannot be multiplied");
      }


  
  return 0;
}
/*
#include<stdio.h>
void mulmat (int a[][10], int b[][10], int, int, int, int);
void input (int a[][10], int, int);
void print (int a[][10], int, int);
void
main ()
{
int i, j, l, m, n, o;
printf ("enter matrix A dimensions: \n");
scanf ("%d %d", &l, &m);
printf ("\nenter matrix B dimensions: \n");
scanf ("%d %d", &n, &o);
int a[10][10], b[10][10];
if (m == n)
{
printf ("\nenter matrix A: \n");
input (a, l, m);
printf ("\nenter matrix B: \n");
input (b, n, o);
printf ("\nMatrix A :\n");
print (a, l, m);
printf ("\nMatrix B :\n");
print (b, n, o);
mulmat (a, b, l, m, n, o);
}
else
{
printf ("Matrix Multiplication not possible.");
}


}

void
input (int a[][10], int q, int w)
{
int i, j;
for (i = 0; i < q; i++)
{
for (j = 0; j < w; j++)
{
scanf ("%d", &a[i][j]);
}
}
}

void
print (int a[][10], int q, int w)
{
int i, j;
for (i = 0; i < q; i++)
{
for (j = 0; j < w; j++)
{
printf ("%d ", a[i][j]);
}
printf ("\n");
}
}

void
mulmat (int a[][10], int b[][10], int l, int m, int n, int o)
{
int i, j, k;
int mult[10][10] = { 0 };
printf ("\nMultipication of Matrix A and B :\n");
for (i = 0; i < l; ++i)
{
for (j = 0; j < o; ++j)
{
for (k = 0; k < m; ++k)
{
mult[i][j] += a[i][k] * b[k][j];
}
}
}
print (mult, l, o);
}
<PoojaSD> #include<stdio.h>
int main()
{
int a,b,c,d,i,j,k,sum=0;
int first[2][2],second[2][2],multiply[2][2];
printf("enter the no of rows and columns in first");
scanf("%d %d",&a,&b);
printf("enter the elements of first matrix");
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
scanf("%d",&first[i][j]);
}
}
printf("enter the no of rows and columns in second");
scanf("%d %d",&c,&d);
if(b!=c)
{
printf("matrix multiplicaion is not possible");
}
else
{
printf("enter the elements of second matrix");
for(i=0;i<c;i++)
{
for(j=0;j<d;j++)
{
scanf("%d",&second[i][j]);
}
}
for(i=0;i<a;i++)
{
for(j=0;j<d;j++)
{
for(k=0;k<c;k++)
{
sum=sum+first[i][k]*second[k][j];
}
multiply[i][j]=sum;
sum=0;
}
}
printf("the product of matrices are:\n");
for(i=0;i<a;i++)
{
for(j=0;j<d;j++)
{
printf("%d\t",multiply[i][j]);
}
printf("\n");
}
}
return 0;

}
<Nisha> #include<stdio.h>
#include<stdlib.h>
int input_array(int row,int col,int x[][2])
{	
int i,j;

for(i=0;i<row;i++)
for(j=0;j<col;j++)
scanf("%d",&x[i][j]);

return 0;
}

int multiply(int a[][2],int b[][2],int m,int n,int p,int q,int c[][2])
{
int i,j,k,sum=0;
if(m!=q)
{
printf("Multiplication is not possible\n");
exit(0);
}
printf("Multiplication of two matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{	
for(k=0;k<p;k++)
{
sum+=a[i][k]*b[k][j];
}

c[i][j] = sum;
sum = 0;
}

}
printf("Product of the matrices:\n");

for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
printf("%d\t", c[i][j]);

printf("\n");
}
}

int main()
{
int i,j,a[2][2],b[2][2],c[2][2],m,n,p,q;
printf("Enter the no of rows and columns of matrix A\n");
scanf("%d%d",&m,&n);
printf("Enter the matrix A\n");
input_array(m,n,a);
printf("Enter the no of rows and columns of matrix B\n");
scanf("%d%d",&p,&q);
printf("Enter the matrix B\n");
input_array(p,q,b);

multiply(a,b,m,n,p,q,c);

return 0;
}
*/
