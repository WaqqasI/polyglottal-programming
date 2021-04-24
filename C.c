
#include <stdio.h>

int main(int argc, char** argv) {
    if (argc != 2) {
        printf("Need exactly one argument.");
        return -1;
    }

    int num;
    sscanf(argv[1], "%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("\n");
        if (i % 3 == 0) printf("Fizz");
        if (i % 5 == 0) printf("Buzz");
        if ((i % 3 && i % 5) != 0) printf("%d", i);
    }

    return 0;
}
