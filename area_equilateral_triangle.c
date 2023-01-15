#include<stdio.h>
#include <math.h>
int main() {
    int side; float a,area;
    printf ("enter the side of a equilateral triangle : ");
    scanf ("%d",&side);
    a=sqrt(3);
    area = (a*side*side)/4;

    printf ("Area of equilateral triangle = %f",area);
}