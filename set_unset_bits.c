#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int c= n&1;
    if (c==1){
        printf ("%d is set[1]",n);
    }
    else{
        printf ("%d is unset[0]",n);
    }
} 