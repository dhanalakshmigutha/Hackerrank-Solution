#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int s=9999,count=1;
void small(int *arr,int m){
    if(*(arr+0)<s && m>0 && *(arr+0)!=0)
        s=*(arr+0);
    if(m>0)
        return(small((arr+1),--m));       
}
void difference(int *arr,int n){
    if(n>0){
      if(*(arr+0)>0){
        *(arr+0)-=s;
        count++;
      }
        return(difference((arr+1),--n));
    }}
int main(){
    int n,*arr,i;
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",(arr+i));     
    while(count){
        s=9999;
        count=0;
        small(arr,n);
        difference(arr,n);
        if(count>0)printf("%d\n",count);        
    }
    return 0;
}
