#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int main(void) {
    int *arr = (int*)malloc(sizeof(int) * SIZE);
    for(int i=0;i<SIZE;i++) scanf("%d", &arr[i]);
    for (int i=0;i<SIZE;i++){
        if(arr[i]%2==0) printf("%d\n", arr[i]);
    }
    
    return 0;
}