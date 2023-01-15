#include<stdio.h>

int dsum(int n);

int main() {
    int a;
    scanf("%d",&a);
    int b= dsum(a);
    printf("%d",b);
}

int dsum(int n){
    int a,sum=0;
    while(n>0){
        a= n%10;
        sum=sum+a;
        n=n/10;
    }
    return(sum);
}