#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   int  d1,d2,m1,m2,y1,y2;
    scanf("%d%d%d",&d1,&m1,&y1);
    scanf("%d%d%d",&d2,&m2,&y2);
    if(y1<y2)
         printf("0");
    else if(y1<=y2 && m1<m2)
        printf("0");
    else if(y1<=y2 && m1==m2 && d1<=d2)
        printf("0");
    else{
    if(y1==y2 && m1==m2 && d1!=d2)
        printf("%d",15*(abs(d2-d1)));
    else if(y1==y2 && m1!=m2)
        printf("%d",500*(abs(m2-m1)));
    else if(y1!=y2)
        printf("10000");
    }  
    return 0;
}
