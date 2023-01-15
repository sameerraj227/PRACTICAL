#include<stdio.h>

int  powr(int n,int m);

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c = powr(a,b);
    printf ("%d",c);
}

int  powr(int n,int m){
    int j=1;
    for (int i=1; i<=m; i++){
        j=j*n;
    }
    return j;
}