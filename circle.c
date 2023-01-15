#include <stdio.h>

int main() {
    int r;
    printf ("enter the radius :");
    scanf ("%d",&r);

    printf ("diameter : %d\n",2*r);

    printf ("circumference of circle : %0.3f\n",2*3.14*r);

    printf ("Area of circle : %0.3f \n",3.14*r*r);

    return 0;
}