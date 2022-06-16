#include <stdio.h>

int main() {
    char c[21] = "NULL";
    int i;
    scanf("%s", c);
    for(i=0; c[i]!='\0'; i++) printf("\'%c\'\n", c[i]);
    return 0;
}