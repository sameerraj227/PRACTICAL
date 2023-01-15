#include<stdio.h>
//reverse and pallindrome   121
int main() {
    int n;
    scanf ("%d",&n);
    int c=n;
    int a,b=0;
    while (n>0){
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    printf ("reverse of a %d is %d\n",c,b);

    if (c == b){
        printf ("Given number is a pallindrome.");
    }
    else{
        printf ("Given number is not a pallindrome.");
    }
}