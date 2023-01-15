#include <stdio.h>
#include <math.h>
int main() {
  
    int x,y; double power;
    printf("enter the number a &b\n");
    scanf ("%d %d",&x,&y);
    power=pow(x,y);
    printf ("%0.1f",power);


}