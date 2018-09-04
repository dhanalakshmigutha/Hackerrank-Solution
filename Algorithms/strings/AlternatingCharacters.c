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
    int n,i,j,len;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        char *str;
        int d=0,flag=0;
        str=(char *)malloc(100000*sizeof(char));
        scanf("%s",str);
        len=strlen(str);
        for(j=0;j<len && len!=0 ;j++){
            if(*(str+j)=='A' && (j==0||flag==0))
                flag=1;
            else if(*(str+j)=='B' && (j==0||flag==1))
                flag=0;
            else
                d++;
        }
        free(str);
        if(len!=0)
        printf("%d\n",d);
    }
}
