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
   int n,i,j,count=0;
    int *arr=(int*)calloc(26,sizeof(int));
    scanf("%d",&n);
    for(i=0;i<n;i++){
        char *str=(char*)malloc(100*sizeof(char));
        scanf("%s",str);
        int len=strlen(str);
        for(j=0;j<len;j++){
            if(*(arr+(*(str+j)-'a'))==i)
                *(arr+(*(str+j)-'a'))=i+1;
        }
     }
    for(i=0;i<26;i++){
        if(*(arr+i)==n)
            count++;
    }
    printf("%d",count);
     return 0;
}
