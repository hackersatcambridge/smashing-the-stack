#include <stdio.h>
#include <string.h>

void foo(char *input) {
    char buffer[64];
    printf("location of buffer = %p\n", buffer);

    strcpy(buffer, input);

    printf("Return address: %p\n", __builtin_return_address(0));
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    foo(argv[1]);

    return 0;
}
