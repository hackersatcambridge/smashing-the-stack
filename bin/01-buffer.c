#include <stdio.h>
#include <string.h>

struct my_data {
    char buffer[16];
    int foo;
};

int main(void) {
    struct my_data data;
    data.foo = 42;

    strcpy(data.buffer, "hello world");
    printf("string is %s\n", data.buffer);
    printf("a is %d\n", data.foo);

    return 0;
}
