#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k,i,max=-1; 
    scanf("%d %d",&n,&k);
    int *height = malloc(sizeof(int) * n);
    for(i = 0; i < n;i++){
       scanf("%d",&height[i]);
        }
    for(i=0;i<n;i++){
        if(height[i]>max)
            max=height[i];
         }
    if(max<k)
        printf("0");
    else  
        printf("%d",(max-k));
    // your code goes here
    return 0;
}
