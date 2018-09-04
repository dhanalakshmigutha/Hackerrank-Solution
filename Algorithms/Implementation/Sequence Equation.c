#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,arr[50],ele,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&ele);
        arr[ele]=i;
    }
    for(i=1;i<=n;i++)
        printf("%d\n",arr[arr[i]]);
    return 0;

}
