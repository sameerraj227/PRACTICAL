#include<stdio.h>
int main() {
    int l1,b1,h1;
    int l2,b2,h2;
    int vol1, vol2;

    printf ("enter the dimension of wall in form of length, breath, height");
    scanf ("%d %d %d",&l1,&b1,&h1);

    printf ("enter the dimension of brick in form of length, breath, height");
    scanf ("%d %d %d",&l2,&b2,&h2);
    
    vol1 = l1*b1*h1;
    vol2 = l2*b2*h2;

    int n;
    n = vol1/vol2;

    printf ("Number of bricks put in wall = %d",n);

}