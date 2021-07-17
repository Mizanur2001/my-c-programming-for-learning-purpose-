//challenge accepted
#include <stdio.h>

//typedef int* pointer;
int swap(int *a, int *b, int *c, int *d, int *e, int *f, int *g, int *h, int *i, int *j, int *m)
{
  int k, l, o, n, p;
  k = *a;
  *a = *m;
  *m = k;

  l = *b;
  *b = *j;
  *j = l;

  o = *c;
  *c = *i;
  *i = o;

  n = *d;
  *d = *h;
  *h = n;

  p = *e;
  *e = *g;
  *g = p;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
  printf("Now the array is\n");
  printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9], arr[10]);
  printf("After swap the array is\n");
  swap(&arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9], &arr[10]);
  printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9], arr[10]);

  return 0;
}