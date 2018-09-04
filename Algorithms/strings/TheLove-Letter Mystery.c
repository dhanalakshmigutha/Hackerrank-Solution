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
    int qu,i,j,k;
    scanf("%d",&qu);
    for(i=0;i<qu;i++){
        char *str=(char *)malloc(10000*sizeof(char));
        scanf("%s",str);
        int n=strlen(str),count=0;
        for(j=0,k=n-1;j<k&&j!=k;j++,k--){
            if(*(str+j)!=*(str+k)){
              if(*(str+j)<*(str+k)){
                   while(*(str+j)!=*(str+k)){
                    char ch=*(str+k);
                    *(str+k)=((int)ch)-1;
                    count++;
                   }}
                else if(*(str+j)>*(str+k)){
                while(*(str+j)!=*(str+k)){
                    char ch=*(str+j);
                    *(str+j)=((int)ch)-1;
                    count++;
                   }}
            }
        }
        printf("%d\n",count);
        free(str);
    }
    return 0;
}
