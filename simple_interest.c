#include<stdio.h>
int main() {
    int principal,rate,time,S_I;
    printf ("Enter the principal, rate, time for simple interest :");
    scanf ("%d %d %d",&principal,&rate,&time);

    S_I = (principal*rate*time)/100;

    printf ("simple interest = %d",S_I);

    return 0;
}