#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /*int *arr = malloc(sizeof(int) * 5);
    int i,j,s[5];
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
     
            
        }
    }
    return 0;*/

    long long int t[5];
    int i;
    long long int max;
    long long int min = 0;
    long long int sum = 0;
    long long int maxsum;
    long long int minsum;
    
    scanf("%lld %lld %lld %lld %lld",&t[1],&t[2],&t[3],&t[4],&t[5]);
    max = t[1];
    min = t[1];
    i = 1;
    while (i < 5) {
        ++i;
        if (t[i] > max) {max = t[i];}
        if (min > t[i]) {min = t[i];}
    };
    sum = t[1] + t[2] + t[3] + t[4] + t[5];
    printf("%lld %lld", sum-max, sum-min);
    return 0;
}


