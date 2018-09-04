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
    int c=1,i;
    char *str;
    str=(char *)malloc(100000*sizeof(char));
    scanf("%s",str);
    for(i=0;*(str+i)!='\0';i++){
        if(*(str+i)>=65 && *(str+i)<=90)
            c++;
    }
    printf("%d",c);
    return 0;
}
