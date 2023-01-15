#include<stdio.h>
int main() {
    int n;
    printf ("Enter the number : ");
    scanf ("%d",&n);
    int a =0;int b = 1;int c;
    printf ("%d %d ",a,b);
    for (int i = 0; i<n-2; i++){
        c = a+b;
        a=b;
        b=c;
    
        printf ("%d ",c);
    }
}