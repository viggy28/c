#include <stdio.h>

void times2byarrayPointer(int *a, int len) {
    for (int i = 0; i < len; i++)
    {
         a[i] *= 2;
    }
}


void times2byarray(int a[5], int len) {
    for (int i = 0; i < len; i++)
    {
         a[i] *= 2;
    }
}

int main() {
    int arr[5] = {2,4,6,8,10};
    int *p;
    p = arr;
    //printf("initial address that the pointer points to %p \n", p);
    size_t elementInByte = sizeof arr[0];
    //printf("size of an element in bytes %lu \n", elementInByte);
    int len = sizeof arr/elementInByte;

    times2byarrayPointer(arr, len);
    for (int i = 0; i < len; i++) { 
        printf("value is %d \n", arr[i]);
    }
    times2byarray(arr, len);
    for (int i = 0; i < len; i++) { 
        printf("value is %d \n", arr[i]);
    }
}