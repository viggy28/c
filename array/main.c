#include <stdio.h>

int givesize(int arr[100]) {
    return (sizeof arr);
}

int main() {
    // array initialization. Sets the first element and the rest all defaulted to 0.
    int a[100] = {1};
    printf("size of the array calculated inside main fn %zu \n", sizeof a);
    size_t size;
    size = givesize(a);
    printf("size of the array is %zu", size);
/*     for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    } */
}

