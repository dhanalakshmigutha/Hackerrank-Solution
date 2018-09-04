#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int n,i; 
    long int sum=0;
    scanf("%i", &n);
    long int *ar = malloc(sizeof(long int) * n);
    for(i = 0; i < n; i++){
       scanf("%li",&ar[i]);
    }
    for(i = 0; i < n; i++){
        sum+=ar[i];
    }
    printf("%li",sum);
    
    return 0;
}
