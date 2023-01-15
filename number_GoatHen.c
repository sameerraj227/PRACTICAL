//write a C program to find the number of goats and number of hens in a farm if no. of head are 90 and no. of legs are 240.
#include <stdio.h>
int main() {
    int head, leg, x, y; //x as a goat, y as a hen
    printf ("enter the heads and leg : ");
    scanf ("%d %d",&head,&leg);
    
    x = (leg - 2*head)/2;
    y = head - x;

    printf("Goat = %d\n Hen = %d",x,y);
    return 0;
}