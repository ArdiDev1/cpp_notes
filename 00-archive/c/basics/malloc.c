#include <stdlib.h>
#include <stdio.h>

int main() {
    int* p = calloc(sizeof(int) * 4, 0);
    printf("%d\n", p[5]);

    p = p + 1;
    free(p);
    return 0;
}