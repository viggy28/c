#include <stdio.h>

// Define a struct
struct MyStruct {
    int i;
    float f;
    char c;
};

// Define a union
union MyUnion {
    int i;
    float f;
    char c;
};

int main() {
    // Initialize a struct
    struct MyStruct s = {10, 20.5, 'a'};
    printf("Struct values: %d, %f, %c\n", s.i, s.f, s.c);

    // Initialize a union
    union MyUnion u;
    u.f = 20.5;
    u.i = 10;
    u.c = 'a';
    printf("Union char: %c\n", u.c);
    printf("Union float: %f\n", u.f);
    printf("Union int: %d\n", u.i);

    return 0;
}