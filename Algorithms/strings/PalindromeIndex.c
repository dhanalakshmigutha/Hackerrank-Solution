#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

int t;
scanf("%d", &t);
while (t--) {
    char s[100005];
    scanf("%s", s);
    int l = 0;
    int r = strlen(s) - 1;

    while (l < r) {
        if (s[l] == s[r]) {
            l++;
            r--;
        }
        else {
            break;
        }
    }

    if (l >= r) {
        printf("-1\n");
        continue;
    }

    int saveLeft = l;
    int saveRight = r;

    l++;
    int leftFault = 1;
    while (l < r) {
        if (s[l] == s[r]) {
            l++;
            r--;
        }
        else {
            leftFault = 0;
            break;
        }
    }

    printf("%d\n", leftFault ? saveLeft : saveRight);

}
return 0;
}
