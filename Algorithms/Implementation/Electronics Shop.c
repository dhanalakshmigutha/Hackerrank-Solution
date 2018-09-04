#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    int s; 
    int n,max=0; 
    int m,i,j,l; 
    scanf("%d %d %d", &s, &n, &m);
    int *k = malloc(sizeof(int) * n);
    for( i = 0; i < n;i++){
       scanf("%d",&k[i]);
    }
    int *d = malloc(sizeof(int) * m);
    for( i = 0;i < m; i++){
       scanf("%d",&d[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            l=k[i]+d[j];
            if((l<=s)&&(max<l))
                max=l;
        }
    }
    if(max!=0)
        printf("%d",max);
    else if(max==0)
        printf("-1");
    return 0;
}
