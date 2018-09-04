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
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        char *str;
        int flag=1,k;
        str=(char *)malloc(10000*sizeof(char));
        scanf("%s",str);
        int len=strlen(str);
        for(j=0,k=len-1;j<len-1;j++,k--)
            if(abs((*(str+j)-'a')-(*(str+(j+1))-'a'))!=abs((*(str+k)-'a')-(*(str+(k-1))-'a')))
           {
               printf("Not Funny\n");
               flag=0;
               break;
           } 
        if(flag==1)
        printf("Funny\n");
        free(str);
    }
    return 0;
}
