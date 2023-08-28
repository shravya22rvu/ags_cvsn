#include <stdio.h>


int main(void) {
int *a;
  int x[100];
  a=&x;
  printf("Size of integer pointer:%d",sizeof(a));
char *b;
  int y[100];
  b=&y;
  printf("\nSize of character pointer:%d",sizeof(b));
float *c;
  int z[100];
  c=&z;
  printf("\nSize of float pointer:%d",sizeof(c));
double *d;
  int w[100];
  d=&w;
  printf("\nSize of double pointer:%d",sizeof(d));
  //same size cuz ultimately it is a ptr variable which stores the address having fixed strength, size is same irrespective of data type
}