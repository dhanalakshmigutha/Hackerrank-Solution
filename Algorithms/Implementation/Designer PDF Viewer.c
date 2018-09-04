#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int *a,i,lar=-9;
    char str[10];
    a=(int *)malloc(26*sizeof(int));
    for(i=0;i<26;i++)
        scanf("%d",(a+i));
    scanf("%s",str);
    for(i=0;i<strlen(str);i++){
        if(*(a+(*(str+i)-'a'))>lar)
            lar=*(a+(*(str+i)-'a'));
    }
    printf("%d",(strlen(str)*lar));
        return 0;
}
