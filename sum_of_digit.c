#include<stdio.h>
int main() {
    int n;
    scanf ("%d",&n);
    int c; int s=0;
    while (n>0){
        c=n%10;
        s=s+c;
        n=n/10;
    }
    printf ("%d",s);
    return 0;
}