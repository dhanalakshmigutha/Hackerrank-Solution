#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int n; 
    int k,i,c=0,j; 
    scanf("%i %i", &n, &k);
    int *a= malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%i",&a[i]);
    }
   /* int result = divisibleSumPairs(n, k, n, ar);
    printf("%d\n", result);*/
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i<j)&&(((a[i]+a[j])%k)==0))
                c++;
        }
    }
    printf("%d",c);
    return 0;
}
