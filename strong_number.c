#include<stdio.h>
//strong number  145
int main(){
    int n;
    printf ("Enter the number : ");
    scanf ("%d",&n);
    int num = n;
    int a;long b; int s=0;
    while (n>0){
        a = n%10;
        int i=1; long f=1; 
        while (i<=a){
            f = f*i;
            b = f;
            i++;
        }
        s=s+b;
        n=n/10;
    }
    if (s==num){
        printf ("number is a strong number.");
    }
    else {
        printf ("number is not a strong number.");
    }
    return 0;
}