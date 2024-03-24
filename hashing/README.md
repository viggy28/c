A simple hashing program to understand how to use [xxhash](https://github.com/Cyan4973/xxHash) 

Also, a good example for understanding dynamic vs static library

## cmake for dynamic linking

```
cmake_minimum_required(VERSION 3.27)
project(hashing C)

set(CMAKE_C_STANDARD 11)

link_directories(/Users/visi/Sourcecontrol/github.com/Cyan4973/xxHash)

add_executable(hashing main.c)
target_link_libraries(hashing xxhash)
```

```
[16:37:21] visi:hashing $ otool -L build/hashing                                             
build/hashing:
        /usr/local/lib/libxxhash.0.dylib (compatibility version 0.0.0, current version 0.8.2)
        /usr/lib/libSystem.B.dylib (compatibility version 1.0.0, current version 1311.100.3)
```

Overwrite the dynamic library search path with
`export DYLD_LIBRARY_PATH=/Users/visi/Sourcecontrol/github.com/Cyan4973/xxHash:$DYLD_LIBRARY_PATH`

on Unix systems, the environment variable is LD_LIBRARY_PATH


## cmake for static linking

```
cmake_minimum_required(VERSION 3.27)
project(hashing C)

set(CMAKE_C_STANDARD 11)

add_executable(hashing main.c)
target_link_libraries(hashing /Users/visi/Sourcecontrol/github.com/Cyan4973/xxHash/libxxhash.a)
```

shows that it is static linked

```
[16:40:28] visi:hashing $ otool -L build/hashing
build/hashing:
        /usr/lib/libSystem.B.dylib (compatibility version 1.0.0, current version 1311.100.3)
[16:40:36] visi:hashing $ 

```