#include <stdio.h>

int main() {
    int *p;
    //p = NULL;
    int a = 10;
    p = &a;
    if (p == NULL) {
        printf("value pointer points is NULL");
    }else {
        printf("value pointer points to %d", *p);
    }
}