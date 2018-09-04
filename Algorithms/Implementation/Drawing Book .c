#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    long int n,page;
    scanf("%ld%ld",&n,&page);
    if(page/2<(n/2-page/2))
        printf("%ld",page/2);
    else
        printf("%ld",n/2-page/2);
    return 0;
}

    
