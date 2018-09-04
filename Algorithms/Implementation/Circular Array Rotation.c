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
    long int n,ro,qu,i,*ar,ele;
    scanf("%ld%ld%ld",&n,&ro,&qu);
    ar=(long int *)malloc(n*sizeof(long int));
    for(i=0;i<n;i++)
        scanf("%ld",(ar+i));
    for(i=0;i<qu;i++)
    {
        scanf("%ld",&ele);
        printf("%ld\n",*(ar+((n-(ro%n)+ele)%n)));
    }
    return 0;
}
