#include <stdio.h>

int main (void){
    float h, b, c, s;
    scanf("%f %f %f %f", &h, &b, &c, &s);
    float mb = (float)(h*b*c*s)/8/1024/1024;
    printf("%.1f MB", mb);

    return 0;
}