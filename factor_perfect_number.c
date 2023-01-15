#include<stdio.h>
//factor and perfect number
int main() {
    int n;
    scanf ("%d",&n);
    int a=0; int i=1;
    printf ("Factor -->");
    while (i<n){
        if (n%i==0){
            a=a+i;
            printf("%d\n",i);
        }
        i++;
    }
    if (n==a){
        printf ("number is a perfect number");
    }
    else {
        printf ("number is not a perfect number");
    }
}