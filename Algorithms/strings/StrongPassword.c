#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,c1=0,c2=0,c3=0,c4=0,c=0,i; 
    scanf("%i", &n);
    char* password = (char *)malloc(512000 * sizeof(char));
    scanf("%s", password);
    for(i=0;i<strlen(password);i++)
    {
        if(isdigit(password[i]))
            c1=1;
         if(isupper(password[i]))
            c2=1;
         if(islower(password[i]))
            c3=1;
       if(password[i]=='!'||password[i]=='@'||password[i]=='#'||password[i]=='$'||password[i]=='%'||password[i]=='^'||password[i]=='&'||password[i]=='*'||password[i]=='('||password[i]==')'||password[i]=='-'||password[i]=='+')
             c4=1;
    }
    c=c1+c2+c3+c4;
     int l=strlen(password);
    if((c!=4)&&l>=6)
        printf("%d",(4-c));
    else if(c==4&&l<6)
        printf("%d",(6-l));
    else
    {
        if((4-c)>(6-l))
          printf("%d",(4-c));
        else
            printf("%d",(6-l));
    }
        
    return 0;
}
