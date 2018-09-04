#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i;
     int a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        //printf("%d",sqrt())
       printf("%d\n",abs(floor(sqrt(b))-ceil(sqrt(a))+1));
    }    
    return 0;
}
