#include<stdio.h>
int main () {
    int a1,a2,a3;
    printf ("enter the two angle of triangle"); 
    scanf ("%d %d",&a1,&a2);

    a3 = 180-(a1+a2);

    printf ("third angle of triangle : %d",a3);
}