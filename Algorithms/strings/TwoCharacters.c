#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n,i,j=0,k,c=0,l=0,cm=0,*arr,f=0,g=1;
    char *str,*s,*us;
    arr=(int*)calloc(26,sizeof(int));
    s=(char*)malloc(26*sizeof(char));
    scanf("%d",&n);
    str=(char *)malloc(n*sizeof(char));
    us=(char *)malloc(n*sizeof(char));
    scanf("%s",str);
    for(i=0;i<n;i++){
       if(*(str+i)==*(str+(i+1))){
           *(arr+(*(str+i)-'a'))=-1;
           i++;
       }
       else if(*(str+i)!=*(str+(i+1)) && (*(arr+(*(str+i)-'a')))!=-1)
          *(arr+(*(str+i)-'a'))=1;
    }
    for(i=0;i<26;i++)
        if(*(arr+i)==1){
            *(s+j)=i+'a';
                j++;
        }
    for(i=0;i<n;i++)
        for(k=0;k<j;k++){
            if(*(str+i)==*(s+k)){
                *(us+l)=*(str+i);
                l++;
            }
        }
     for(i=0;i<j;i++)
         for(k=i+1;k<j;k++){
             c=0;
             g=1;
            for(n=0;n<l;n++){
                if(*(s+i)==*(us+n)){
                   if(c==0 || f==0){
                    c++;
                    f=1;
                  }
                else{
                    g=0;
                    break;
                }}
                else if(*(s+k)==*(us+n)){
                    if(c==0 || f==1){
                    c++;
                    f=0;
                    }
                    else{
                    g=0;
                    break;
                }   
                }
            }
             if(c>cm && g==1)
                 cm=c;
         }
    printf("%d",cm);
    return 0;
}
