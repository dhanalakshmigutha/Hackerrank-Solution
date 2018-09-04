#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int q,c,c1; 
    scanf("%d",&q);
    for(int a0 = 0; a0 < q; a0++){
        int x; 
        int y; 
        int z; 
        scanf("%d %d %d",&x,&y,&z);
         if((y!=z)&&(x>y&&x<=z))
            printf("Cat A\n");
        else if((x!=z)&&(x<y&&y<=z))
            printf("Cat B\n");
         else{
             if((abs(x-z))<(abs(z-y)))
               printf("Cat A\n");
             else if((abs(x-z))>(abs(z-y)))
                  printf("Cat B\n");
             else if((x==z&&z==y)||((abs(x-z))==(abs(y-z))))
                printf("Mouse C\n"); 
    }}                
        
            return 0;

}
