// A simple program to understand call by value and reference
// An argument to a function is always copied. Some times it's just data and sometimes it's the address/reference thats copied.

#include <stdio.h>
#include <stdlib.h>

void addbyone(int n) {
    ++n;
}

void addbyonePtr(int *n) {
    // dereference explicitly 
    ++(*n);
}

int main() {
    printf("hello world\n");

    int a = 0;
    int b = 0;
    int *p;
    p = &a;
    printf("address of a is %p\n", &a);
    addbyonePtr(&a);
    addbyone(b);
    printf("value through pointer %d \n", a);
    printf("value through copy %d", b);
}

