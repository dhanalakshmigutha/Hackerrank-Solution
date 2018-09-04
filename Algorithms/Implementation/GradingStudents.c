#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    int n,r,r1,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>=38){
            r=a[i]%5;r1=5-r;
            if(r1<3)
                a[i]+=r1;
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}
