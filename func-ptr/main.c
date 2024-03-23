#include <stdio.h>
#include <stdlib.h>

// creates a new type called "op" which is a function pointer
// which takes two integer arguments and returns an integer
typedef int (*op)(int, int);

// creates a new type called "opp" which is a function pointer
// which takes two integer arguments and returns an integer
typedef int *(*opp)(int, int);

// create a new type called "opplain" which is a function
// this syntax make it easier to understand that the type is a function
typedef int opplain(int, int);

// process processes two integers and returns an integer
int process(int a, int b, op operation) { return operation(a, b); }

int *processp(int a, int b, opp operation) {
  // operation is of type opp which is a function pointer which returns an
  // integer pointer
  return operation(a, b);
}

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
  void *a[4];
  a[0] = &add;
  output = process(4, 8, a[0]);
  printf("processed value is %d \n", output);
  a[1] = &mul;
  output = process(4, 8, a[1]);
  printf("processed value is %d \n", output);
  a[2] = &addp;
  int *outputp = processp(4, 10, a[2]);
  printf("processed value is %d \n", *outputp);
  opplain *oppl = &add;
  output = process(4, 8, oppl);
  return 0;
}
