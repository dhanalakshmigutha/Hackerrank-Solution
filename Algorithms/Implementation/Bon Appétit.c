#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int n,tot; 
    int k,i,s=0; 
    scanf("%i %i", &n, &k);
    int *ar = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++){
       scanf("%i",&ar[i]);
    }
    int b; 
    scanf("%i", &b);
    ar[k]=0;
    for(i=0;i<n;i++){
        s=s+ar[i];
    }
    i=s/2;
    tot=b-i;
   if(i==b)
        printf("Bon Appetit");
    else
        printf("%d",tot);
  
   
    return 0;
}
