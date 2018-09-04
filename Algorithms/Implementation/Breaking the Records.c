#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int n,i,c1=0,c2=0; 
    scanf("%d",&n);
    int *s = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%d",&s[i]);
    }
    int min=s[0];
    int max=s[0];
    for(i=0;i<n;i++){
        if(s[i]>max){
            max=s[i];
            c1++;
        }
       if(s[i]<min){
            min=s[i];
            c2++;
        }
    }
    printf("%d %d",c1,c2);
    return 0;
            
    }
   /* int result_size;
    int* result = getRecord(n, s, &result_size);
    for(int i = 0; i < result_size; i++) {
        if (i) {
            printf(" ");
        }
        printf("%d", result[i]);
    }
    puts("");*/
    
   
