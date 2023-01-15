#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i=2; int c=0;
    while(i<n){
        if(n%i==0){
            c++;
            printf ("Not Prime number");
            break;
        }
        i++;
    }
    if (c==0){
        printf ("Prime number");
    }
    
    return 0;
}