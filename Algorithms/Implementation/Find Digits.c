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
    int a,i,n,m,j,c;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&n);
        c=0;
        m=n;
        while(n>0){
            j=n%10;
            if(j!=0 && (m%j)==0){
                 c++;
            }
             n=n/10;
         }
        printf("%d\n",c);
    }
}
