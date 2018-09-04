#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    int n,i,s=0; 
    scanf("%d", &n);
    int *ar = malloc(sizeof(int) * n);
    for(i = 0; i < n;i++){
       scanf("%i",&ar[i]);
    }
    for(i=0;i<n;i++){
        s=s+ar[i];
    }
    printf("%d\n", s);
    return 0;
}
