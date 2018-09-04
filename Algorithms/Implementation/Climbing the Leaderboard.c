#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct marks
{
   long int data,rank; 
};
int main()
{
   long int n,alic,pre=-99,co=0,res,i,j;
    struct marks *arr;
    scanf("%ld",&n);
    arr=(struct marks *)malloc(n*sizeof(struct marks));
    for(i=0;i<n;i++){
        scanf("%ld",&((arr+i)->data));
        if(pre==(arr+i)->data)
            (arr+i)->rank=co;
        else
            (arr+i)->rank=++co;
        pre=(arr+i)->data;
    }
    i=i-1;
    scanf("%ld",&alic);
    for(j=0;j<alic;j++){
        scanf("%ld",&res);
        if(res>(arr+0)->data)
            printf("1\n");
        else if(res<(arr+i)->data)
            printf("%ld\n", ((arr+i)->rank)+1);
       else if(res==(arr+i)->data)
            printf("%ld\n", ((arr+i)->rank));
        else{
            while(res>(arr+i)->data)
                i--;
            if(res<(arr+i)->data)
            printf("%ld\n", ((arr+i)->rank)+1);
       else if(res==(arr+i)->data)
            printf("%ld\n", ((arr+i)->rank));
        }}
    return 0;    
}
