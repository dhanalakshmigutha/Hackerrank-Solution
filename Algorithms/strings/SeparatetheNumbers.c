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
    int n,i,j,k;
    scanf("%d",&n);
    for(k=0;k<n;k++){
        char *str=(char *)malloc(32*sizeof(char));
        scanf("%s",str);
        long long int d1=0,d2=0,d3;
        int f=0;
        for(i=0;i<=strlen(str)/2;i++)
        {
            d1=d1*10+(*(str+i)-'0');
            d3=d1;
            f=0;
            d2=0;
            for(j=i+1;j<strlen(str);j++){
                d2=d2*10+(*(str+j)-'0');
                if(d2==0 || (d2-d1)>1){
                    f=0;
                    break;
                }
                if(d2-d1==1){
                    d1=d2;
                    d2=0;
                    f=1;
                }
                else
                    f=0;
                    
            }
            if(f==1){
                printf("YES %ld\n",d3);
                break;
                }
            d1=d3;
        }
        if(f==0)
            printf("NO\n");
    }  
 return 0;
}
