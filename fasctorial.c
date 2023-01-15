#include <stdio.h>
int main () {
    int n,j=1;
    scanf ("%d",&n);
    for (int i=1; i<=n; i++){
        j=j*i;
    }
    printf ("factorial of %d is %d",n,j);
    return 0;
}
