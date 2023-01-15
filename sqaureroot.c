#include<stdio.h>
#include<math.h>
int main() {
    int x; double a;
    printf ("Enter the value");
    scanf ("%d",&x);
    a = sqrt(x);
    printf ("squareroot of %d is: %0.1lf",x,a);
    return 0;
}