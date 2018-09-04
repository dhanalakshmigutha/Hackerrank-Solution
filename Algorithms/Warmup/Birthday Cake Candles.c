#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int n,i,frequency,max=-1; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(i = 0;i < n;i++){
       scanf("%i",&ar[i]);
    }
    for(i=0;i<n;i++){

    if(ar[i]>max){ 
       max=ar[i];  
        frequency=1;
    }  
    else if(ar[i]==max){
              frequency++;
         }

}
printf("%d",frequency);
return 0;
}
