#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int j=0,c=0;
    char str[3]={'S','O','S'};
    for(int i=0;i<(strlen(s));i++)
    {
        if(j==3)
           j=0;
        if(s[i]!=str[j])
            c++;
        j++;
    }
    printf("%d",c);
    return 0;
}
