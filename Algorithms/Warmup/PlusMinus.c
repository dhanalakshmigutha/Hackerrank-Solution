#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,p1=0,ne1=0,z1=0; 
    float p,ne,z;
    scanf("%d",&n);
    int a[n];
    for(i = 0; i < n;i++){
       scanf("%d",&a[i]);
    }
    for(i = 0; i < n;i++){
        if(a[i]>0)
            p1++;
        else if(a[i]<0)
            ne1++;
        else
            z1++;
    }
    p=(float)p1/n;
    ne=(float)ne1/n;
    z=(float)z1/n;
    printf("%.6f\n",p);
    printf("%.6f\n",ne);
    printf("%.6f\n",z);
    
    return 0;
}
