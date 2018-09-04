#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int a[3],b[3],a1=0,b1=0,i;
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    for(i=0;i<3;i++)
        scanf("%d",&b[i]);
      for(i=0;i<3;i++){
          if(a[i]>b[i])
              a1++;
          else if(a[i]<b[i])
              b1++;
      }
    printf("%d %d",a1,b1);
          
  
    

    return 0;
}
