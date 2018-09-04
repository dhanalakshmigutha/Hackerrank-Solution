#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[26],i,k;
   char s[1000];
    while (scanf("%s", &s[strlen(s)]) == 1);
    for(i=0;i<strlen(s);i++){
        if(s[i]>='a'&&s[i]<='z')
            a[s[i]-97]=1;
       else if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]+32;
            a[s[i]-97]=1;
       }
    }
     for (i = 0; i < 26; i++) {
        if (!(a[i]==1)) {
            printf("not pangram");
            return 0;
        }
    }

    printf("pangram");
    return 0;
    
}
