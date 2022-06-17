#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    if(n>=90 && n<=100) printf("A");
    else if(n>=70 && n<=89) printf("B");
    else if(n>=40 && n<=69) printf("C");
    else printf("D");

    return 0;
}