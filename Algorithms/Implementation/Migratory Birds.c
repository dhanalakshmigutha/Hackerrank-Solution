#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,i,j,max=0,val2; 
    scanf("%i", &n);
    typedef struct
    {
        int val,c;
    }type;
    type *t=malloc(sizeof(type)*n);
    int *ar = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++){
       scanf("%i",&ar[i]);
        t[i].c=1;
    }
    for(i = 0; i < n; i++){
        for(j=i+1;((j<=(n-1))&&(ar[i]!=-1));j++){
            if(ar[i]==ar[j]&&ar[j]!=-1){
                t[i].val=ar[i];
                t[i].c=t[i].c+1;
                ar[j]=-1;
            }
        }
    }
    for(i=0;i<n;i++){
               if(max<t[i].c){
               
                   max=t[i].c;
                   val2=t[i].val;
        }
         /*if(max=t[i].c){
             
                    max=t[i].c;
                   val2=t[i].val;
        }*/
      else if(max==t[i].c&&t[i].c!=0&&max!=0){
               if(t[i].val<val2){
                  max=t[i].c; 
                   val2=t[i].val;
 
             }
            
    }}
    if(max!=0)
     printf("%d",val2);    
    else
        printf(" ");
    return 0;
  }

