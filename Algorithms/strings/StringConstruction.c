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
    int t;
    scanf("%d",&t);
    while(t--){
        char *str=(char*)malloc(100000*sizeof(char));
        int *arr=(int *)calloc(26,sizeof(int));
        int count=0;
        scanf("%s",str);
        for(int i=0;i<strlen(str);i++){
            if (*(arr+(*(str+i)-'a'))==0){
                count++;
               if(count==26)
                  break;
               (*(arr+(*(str+i)-'a')))=1;
            }
        }
        printf("%d\n",count);
        free(str);
        free(arr);
    }
    return 0;
}
