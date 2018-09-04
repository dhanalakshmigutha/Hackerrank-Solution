#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    int n,i,j,c=0,s; 
    scanf("%d", &n);
    int *ar = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++){
       scanf("%d",&ar[i]);
    }
    int d; 
    int m; 
    scanf("%d %d", &d, &m);
    for(i=0;i<n;i++){
        s=0;
        for(int l=0,j=i;l<m;j++,l++){
            s=s+ar[j];
        }
        if(s==d)
            c++;
    }
    printf("%d",c);
    
    return 0;
}
