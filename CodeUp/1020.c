#include <stdio.h>

int main() {
    int first, last;
    scanf("%d-%d", &first, &last);
    printf("%06d%07d", first, last);
    return 0;
}