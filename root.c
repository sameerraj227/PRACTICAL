#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c,r1,r2;
    printf ("enter the cofficient of x^2, x, constant : ");
    scanf ("%d %d %d",&a,&b,&c);
    int d = b*b - 4*a*c;
    switch (d>0){
        case 1:
        r1 = (-b + sqrt(d))/2*a;
        r2 = (-b - sqrt(d))/2*a;  
        printf("%d %d ",r1,r2); 
        break; 

        case 0:
         switch (d<0){
            case 1:
            printf ("roots are imaginary");
            break;

            case 0:
            r1 = -b/2*a;
            r2=r1;
            printf ("%d %d",r1,r2);
            break;
        }
    }
}