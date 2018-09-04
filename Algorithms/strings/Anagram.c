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
    int *arr,i,n,mid,j,c=0;
    char *str;
    arr=(int *)calloc(26,sizeof(int));
    scanf("%d",&n);
    for(i=0;i<n;i++){
        c=0;
        str=(char *)malloc(10000*sizeof(char));
        scanf("%s",str);
        if(strlen(str)%2==0){
            mid=strlen(str)/2;
        for(j=mid;j<strlen(str);j++)
          (*(arr+(*(str+j)-'a')))++; 
        for(j=0;j<mid;j++)
            (*(arr+(*(str+j)-'a')))--;
        for(j=0;j<26;j++){
         if(*(arr+j)>0)
             c=c+(*(arr+j));
        }
        if(c>=0)
        printf("%d\n",c);
        for(j=0;j<26;j++)
            *(arr+j)=0;        
      }
        else
            printf("-1\n");
        free(str);
    }
    return 0;
}
