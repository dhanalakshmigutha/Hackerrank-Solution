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
    int p,i,j,flag;
    scanf("%d",&p);
    char *str1,*str2;
    for(i=0;i<p;i++){
    str1=(char *)malloc(100000*sizeof(char));
    str2=(char *)malloc(100000*sizeof(char));
      scanf("%s%s",str1,str2);
      int *arr=(int *)calloc(26,sizeof(int));
        flag=0;
      for(j=0;*(str1+j)!='\0' || *(str2+j)!='\0';j++){
          if(*(str1+j)!='\0'){
              if(*(arr+(*(str1+j)-'a'))==2){
                  flag=1;
                  break;
              }
              else
                 *(arr+(*(str1+j)-'a'))=1; 
          }
          if(*(str2+j)!='\0'){
              if(*(arr+(*(str2+j)-'a'))==1){
                  flag=1;
                  break;
              }
              else
                 *(arr+(*(str2+j)-'a'))=2; 
          }
      }
        if(flag==1)
            printf("YES\n");
        else
            printf("NO\n");
        free(arr);
    }
    free(str1);
    free(str2);
        return 0;
}
