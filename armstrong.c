#include<stdio.h>
#include<math.h>
// Armstrong   153
int main() {
    int n ;
    scanf ("%d",&n);
    int c=n;
    int num=n;
    int a,b=0; int s=0;

    while (n>0){
        b++;
        n=n/10;
    }
    
    while (c>0){
        a=c%10;
        double d=pow(a,b);
        s=s+d;
        c=c/10;
    }
    if (s==num){
        printf ("Given number is a armstrong.");
    }
    else {
        printf ("Given number is not a armstrong.");
    }
}