#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int n,i,j,c=0; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<=(n-1)&&ar[i]!=-1;j++){
            if(ar[i]==ar[j]&&ar[j]!=-1)
            {
                ar[j]=ar[i]=-1;
                c++;
                break;
            }
        }
    }
    printf("%d",c);
    return 0;
}
