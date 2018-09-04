#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    int s; 
    int t,r1,c1=0,c2=0; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m; 
    int n,i; 
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    for(i = 0; i < m; i++){
       scanf("%d",&apple[i]);
    }
    int *or = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++){
       scanf("%d",&or[i]);
    }
   
    for(i = 0; i < m; i++){
        r1=a+apple[i];
        if(r1>=s&&r1<=t)
            c1++;
    }
    for(i = 0; i < n; i++){
        r1=b+or[i];
        if(r1>=s&&r1<=t)
            c2++;
    }
    printf("%d\n",c1);
    printf("%d",c2);
   
    return 0;
}

