#include "xxhash.h"
#include <stdio.h>
#include <string.h>

int main() {
  printf("Hello, World!\n");
  char buffer[1500] = "hello";
  XXH64_hash_t hv = XXH64(buffer, strlen(buffer), 0);
  printf("hash value %llu", hv);
  return 0;
}
