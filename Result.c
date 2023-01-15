#include<stdio.h>
int main() {
    int S1,S2,S3,S4,S5,T,T1;
    printf ("enter the marks of 4 subject out of 100 : ");
    scanf ("%d %d %d %d",&S1,&S2,&S3,&S4);

    T = S1+S2+S3+S4;
    T1 = 410-T;
    if (T1>100){
        printf ("they can not score 82");
    }
    else if (40>=T1 || T1<=100){
        printf ("they can score 82 \n");
        if (T1<=40){
            printf ("%d",40);
        }
        else{
            printf ("%d",T1);
        }
    }
    return 0;
}