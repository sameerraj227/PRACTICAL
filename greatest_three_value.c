#include<stdio.h>
int main() {
    int n1,n2,n3;
    printf("Enter the three number : ");
    scanf ("%d%d%d",&n1,&n2,&n3);

    (n1>n2&&n1>n3)?printf ("maxmimum number : %d",n1) : 
    (n2>n3)? printf("maxmimum number : %d",n2) : printf("maxmimum number : %d",n3);
    
    return 0;
}