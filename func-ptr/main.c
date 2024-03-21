#include <stdio.h>
#include <stdlib.h>

// creates a new type called "op" which is a function pointer
// which takes two integer arguments and returns an integer
typedef int (*op)(int, int);

// creates a new type called "op" which is a function pointer
// which takes two integer arguments and returns an integer
typedef int *(*opp)(int, int);

// process processes two integers and returns an integer
int process(int a, int b, op operation) { return operation(a, b); }

int *processp(int a, int b, opp operation) { return operation(a, b); }

int mul(int a, int b) { return (a * b); }

int add(int a, int b) { return a + b; }

int *addp(int a, int b) {
  int *c = (int *)malloc(sizeof(int));
  *c = a + b;
  return c;
}

int main() {
  printf("Hello, World!\n");
  int output;
  output = process(4, 8, mul);
  printf("processed value is %d \n", output);
  output = process(4, 8, &add);
  printf("processed value is %d \n", output);
  void *a[3];
  a[0] = &add;
  output = process(4, 8, a[0]);
  printf("processed value is %d \n", output);
  a[1] = &mul;
  output = process(4, 8, a[1]);
  printf("processed value is %d \n", output);
  a[2] = &addp;
  int *outputp = processp(4, 10, a[2]);
  printf("processed value is %d \n", *outputp);
  return 0;
}
