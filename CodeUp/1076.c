#include <stdio.h>

int main (void){
    char c;
    scanf("%c", &c);
    for(char i = 'a'; i<=c; i++){
        printf("%c\n", i);
    }

    return 0;
}