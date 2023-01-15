//write a C program to print the absolute value of a given no. without math.h
#include <stdio.h>
int main() {

    int a,b;
    printf ("enter the integer value");
    scanf ("%d",&a);
    b= a*((a>0)-(a<0));

    printf ("%d",b);
}