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
    int i,count=0;
    char *str=(char *)malloc(100000*sizeof(char));
    scanf("%s",str);
    int *arr=(int *)calloc(26,sizeof(int));
    for(i=0;*(str+i)!='\0';i++)
        (*(arr+(*(str+i)-'a')))++;
    for(i=0;i<26;i++){
        if(*(arr+i)%2!=0 && *(arr+i)!=0)
            count++;
        if(count==2)
            break;
        }
    if(count==2)
        printf("NO\n");
    else
        printf("YES\n");
    free(arr);
    free(str);
    return 0;
}
