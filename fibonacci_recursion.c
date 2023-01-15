//print fibonacci sequence  //1 1 2 3 5 8 13 21 -----

#include <stdio.h>
int fibo (int n);

int main(){
    // int n ;
    // printf ("enter the limit of fibonacci sequence : ");
    // scanf ("%d",&n);
    printf ("%d",fibo(6));
    return 0;
}

int fibo (int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int fibNm1 = fibo (n-1);
    int fibNm2 = fibo (n-2);
    int fibN = fibNm1 + fibNm2;
    //printf ("%d ",fibN);
    return fibN;
}