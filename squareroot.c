#include<stdio.h>
#include<math.h>

double sroot (int n);

int main() {
    int a;
    scanf("%d",&a);
    int c= sroot(a);
    printf ("%d",c);
}

double sroot (int n){
    double a;
    a=sqrt(n);
    return (a);
}