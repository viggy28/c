//
// Created by visi on 11/15/23.
//

// Demo for ifdef usage

#include "stdio.h"

int main() {
    char *work = NULL;
    #ifdef WORK
        work = "family";
    #endif
    puts(work);
}