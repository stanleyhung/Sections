#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* generate_hello_world() {
    int i;
    const char *message = "hello world!";
    char *output;
    for (i = 0; i < strlen(message); i++) {
        *(output + i) = *(message + i);
    }
    return output;
}

void main() {
    int i;
    char *message = generate_hello_world();
    for (i = 0; i < strlen(message); i++) {
        printf("%c", *(message + i));
    }
    printf("\n");
}
