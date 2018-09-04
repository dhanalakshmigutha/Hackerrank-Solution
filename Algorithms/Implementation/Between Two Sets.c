#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,i,s=999; 
    int m,j,f,g,c=0; 
    scanf("%i %i", &n, &m);
    int *a = malloc(sizeof(int) * n);
    for (i = 0; i < n; i++) {
       scanf("%i",&a[i]);
    }
    int *b = malloc(sizeof(int) * m);
    for ( i = 0; i < m; i++) {
       scanf("%i",&b[i]);
       if(s>b[i])
           s=b[i];
    }
   for(i=1;i<=s;i++)
   {
       f=0,g=0;
       for(j=0;j<n;j++)
       {
           if(i%a[j]==0)
               f=1;
           else
           {
               f=0;
               break;
           }
       }
       if(f==1){
           for(j=0;j<m;j++)
           {
               if(b[j]%i==0)
                  g=1;
           else
           {
               g=0;
               break;
           }
           }}
       if(g==1)
           c=c+1;
   }
    printf("%d",c);
    return 0;
}
