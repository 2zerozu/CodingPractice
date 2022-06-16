#include <stdio.h>

int main(void) {
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    
    int sum = n1+n2+n3;
    float avg = (float)sum/3;
    printf("%d\n%.1f", sum, avg);
    
    return 0;
}