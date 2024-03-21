#include <dlfcn.h>
#include <pwd.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  // replace the location of the library with the location of the library on
  // your system
  void *dlhandle = dlopen(
      "/Users/visi/Sourcecontrol/github.com/Cyan4973/xxHash/libxxhash.0.dylib",
      RTLD_LAZY);
  // handle the case where dlopen fails
  if (dlhandle == NULL) {
    fprintf(stderr, "dlopen failed: %s\n", dlerror());
    return 1;
  }
  // get XXH64 the symbols in the library
  void *sym = dlsym(dlhandle, "XXH64");
  // handle the case where dlsym fails
  if (sym == NULL) {
    fprintf(stderr, "dlsym failed: %s\n", dlerror());
    return 1;
  }
  // call the function
  unsigned long long hash =
      ((unsigned long long (*)(const void *, size_t, unsigned long long))sym)(
          "hello", 5, 0);
  printf("hash: %llu\n", hash);
  return 0;
}