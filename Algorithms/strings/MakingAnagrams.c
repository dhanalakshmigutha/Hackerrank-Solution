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
    char *str1,*str2;
    int c=0,i;
   long int *arr=(long int *)calloc(26,sizeof(long int));
   long int *arr2=(long int *)calloc(26,sizeof(long int));
    str1=(char *)malloc(10000*sizeof(char));
    str2=(char *)malloc(10000*sizeof(char));
    scanf("%s%s",str1,str2);
    for(i=0;i<strlen(str1);i++)
       (*(arr+(*(str1+i)-'a')))++;
    for(i=0;i<strlen(str2);i++)
       (*(arr2+(*(str2+i)-'a')))++;
    for(i=0;i<26;i++)
            c=c+abs(*(arr+i)-*(arr2+i));
    printf("%d",c);
    free(str1);
    free(str2);
    free(arr);
    free(arr2);
    return 0;
}
