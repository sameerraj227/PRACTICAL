#include<stdio.h>
//swap number
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf ("%d \n%d",a,b);
}