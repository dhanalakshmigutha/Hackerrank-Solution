#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,s1=0,s2=0; 
    scanf("%d",&n);
    int a[n][n];
    for(int i =0; i <n;i++){
       for(int j = 0; j < n; j++){
          
          scanf("%d",&a[i][j]);
       }
    }
    
    for(int i = 0,k=n-1;i<n;i++,k--){
       for(int j =0; j < n; j++){
           if(i==j)
               s1+=a[i][j];
          }
        s2+=a[i][k];
    }
  
   
    if(s1>s2)
        printf("%d",(s1-s2));
    
    
    else
        printf("%d",(s2-s1));
    return 0;
}
