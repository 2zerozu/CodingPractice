#include <stdio.h>

int main (void){
    char c;
    do {
        scanf("%c ", &c);
        printf("%c", c);
        if(c!='q') printf("\n");
    } while (c!='q');

    return 0;
}