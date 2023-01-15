//Write C program to check given no. is even or odd without using arthimatic operator. 
#include <stdio.h>
int main() {
    int n,a;
    scanf("%d",&n);
    a = (!(n&1));
    a? printf("Even"):printf ("Odd");
    return 0;   
}