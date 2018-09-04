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
    int *arr,i,n,k,c=100;
    scanf("%d%d",&n,&k);
     arr=(int *)malloc(n*sizeof(int));
     for(i=0;i<n;i++)
        scanf("%d",(arr+i));
    i=0;
    do{
        i=(i+k)%n;
        if(*(arr+i)==1)
            c=c-3;
        else
            c=c-1;
    }while(i!=0);
        printf("%d",c);
        return 0;
    
}
