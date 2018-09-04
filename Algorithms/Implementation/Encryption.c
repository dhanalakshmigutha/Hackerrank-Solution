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
    char **arr;
    char *str;
    int i,len,row,col,j,k=0;
     str=(char *)malloc(81*sizeof(char));
    scanf("%s",str);
    len=strlen(str);
    row=floor(sqrt(len));
    col=ceil(sqrt(len));
    if(row*col<len)
        row=col;
    arr=(char **)malloc((row*sizeof(char*)));
    for(i=0;i<row;i++)
        *(arr+i)=(char *)malloc(col*sizeof(char));
    for(i=0;i<row;i++)
        for(j=0;j<col;j++){
          if(k>=len)
          *(*(arr+i)+j)=' ';
        else
         *(*(arr+i)+j)=*(str+k);
            k++;
        }
    for(j=0;j<col;j++){
        for(i=0;i<row && *(*(arr+i)+j)!=' ';i++){
           printf("%c",*(*(arr+i)+j)); 
        }
        printf(" ");
    }
    return 0;
    
}
