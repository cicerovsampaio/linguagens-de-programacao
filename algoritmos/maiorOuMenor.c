#include "stdio.h"

int main() {
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);

    if (x > y) {
        printf("%d > %d", x, y);
    } else {
        printf("%d > %d", y, x);
    }
    return 0;
}