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

    long int n,k,i,j,count=0,reco=0;
    char *str;
    scanf("%ld%ld",&n,&k);
    str=(char *)malloc(n*sizeof(char));
    scanf("%s",str);
    for(i=0,j=n-1;i<j && i!=j;i++,j--){
        if(*(str+i)!=*(str+j))
            count++;
}
    if(count>k)
        printf("-1");
    else{
        for(i=0,j=n-1;i!=j && i<j;i++,j--){
            if(*(str+i)==*(str+j) && *(str+i)!='9' && *(str+j)!='9' && k-2>=count){
                *(str+i)='9';
                *(str+j)='9';
                k=k-2;
            }
            else if(*(str+i)!=*(str+j) && *(str+i)=='9' && *(str+j)!='9'){
                 *(str+j)='9';
                 count=count-1;
                k=k-1;
            }
            else if(*(str+i)!=*(str+j) && *(str+i)!='9' && *(str+j)=='9'){
                *(str+i)='9';
                 count=count-1;
                k=k-1;
            }
            else if(*(str+i)!=*(str+j)){
                if(k-2>=count-1){
                    *(str+i)='9';
                    *(str+j)='9';
                    k=k-2;
                    count--;
                }
                else
                {
                    if(((int)(*(str+i))-48)>((int)(*(str+j))-48))
                         *(str+j)=*(str+i);
                    else
                        *(str+i)=*(str+j);
                    k=k-1;
                    count--;
                }
            }
        }
        if(n%2!=0 && k>0){
            *(str+n/2)='9';
        }
        printf("%s",str);
    }
    return 0;
}
 
