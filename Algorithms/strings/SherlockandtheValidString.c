#include<stdio.h>
#include<string.h>
int main()
{
    int arr[26]={0};
    char *str=(char *)malloc(100000*sizeof(char));
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
        arr[*(str+i)-'a']++;
    int s1=0;
    int count1=0;
    int s2=0;
    int count2=0;
    for(int i=0;i<26;i++)
        if(arr[i]!=0)
        {
            if(s1==0)
                s1=arr[i];
            if(arr[i]==s1)count1++;
            if(s2==0 && arr[i]!=s1)
                s2=arr[i];
            if(arr[i]==s2)count2++;
            if(arr[i]!=s1 && arr[i]!=s2){
                 printf("NO");
                return 0;
        }}
    if(count1 > 1 && count2 > 1)
        printf("NO");
    else if(((count1==1 && s1>1 && count2 > 1)||(count2==1 && s2>1 && count1 > 1))&& abs(s1-s2)>1)
         printf("NO");
    else
     printf("YES");
    return 0;
}
    
