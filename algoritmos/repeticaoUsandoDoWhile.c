#include "stdio.h"

int main() {
    printf("100 primeiros números inteiros\n");
    int i = 0;

    do {
        printf("%d ", i);
        i++;
    } while (i < 100);

    return 0;
}