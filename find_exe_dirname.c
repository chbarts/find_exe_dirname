#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>

int main(int argc, char *argv[])
{
    char *full, *dir;

    if ((full = getenv("_")) == NULL) {
        fprintf(stderr, "%s: no _ env var\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    printf("_: %s\n", full);

    dir = dirname(full);

    printf("dir: %s\n", dir);

    return 0;
}
