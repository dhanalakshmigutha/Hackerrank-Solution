#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,i,c=0;
    scanf("%d",&n);
    char *str=(char *)malloc(n*sizeof(char));
    scanf("%s",str);
    for(i=0;i<n;i++){
        if(*(str+i)=='1' && *(str+(i-1))=='0' && *(str+(i+1))=='0' && i!=0 && i!=n-1){
            c++;
            i=i+2;
        }
    }
    printf("%d",c);
    return 0;
}
