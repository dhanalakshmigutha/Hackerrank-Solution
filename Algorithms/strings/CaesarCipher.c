#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int k; 
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {   if(s[i]>='a'&&s[i]<='z')
    printf("%c",(s[i]+k-'a')%26+'a');
     else if(s[i]>='A'&&s[i]<='Z')
         printf("%c",(s[i]+k-'A')%26+'A');
     else
         printf("%c",s[i]);
    }
    return 0;
}
