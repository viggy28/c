#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>

int main() {
    // Declare an array of characters to hold a mutable string
    char host[] = "127.0.0.1";

    // Print the original string
    printf("Original string: %s\n", host);

    // Modify the string (for example, change the last octet)
    host[8] = '2';

    // Print the modified string
    printf("Modified string: %s\n", host);

    //char username[256];

      //  snprintf(username, sizeof(username), "%s", getpwuid(getuid())->pw_name);


    char *username = getpwuid(getuid())->pw_name;

    printf("current username: %s\n", username);

    // implement a function that takes a string and returns a string
    // that is the same string but with the last octet changed to '2'
    // (hint: you can use the same array as the input and output)
    
    return 0;

    
}