#include<stdio.h>
void math (int a, int b,int *sum,int *prod,int *avg);

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int sum,prod,avg;
    math (a,b,&sum,&prod,&avg);
    printf ("sum = %d \nproduct= %d \naverage= %d",sum,prod,avg);
}

void math (int a, int b,int *sum,int *prod,int *avg){
    *sum = a + b;
    *prod = a * b;
    *avg = (a+b)/2;
}