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
    int n,a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&n);
        printf("%d\n",(~(~1<<(n>>1)) << n%2));
    }
    return 0;
}
