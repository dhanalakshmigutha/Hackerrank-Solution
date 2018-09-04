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
    int n,i,a,b,*arr,j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        c=0;
        scanf("%d%d",&a,&b);
        arr=(int *)malloc(a*sizeof(int));
        for(j=0;j<a;j++){
            scanf("%d",(arr+i));
            if(*(arr+i)<=0)
                c++;
        }
        if(c>=b)
            printf("NO\n");
        else
            printf("YES\n");
    }
}
