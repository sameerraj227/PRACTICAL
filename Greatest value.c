//Write a program to print the greatest of two given no by using only comparision and arthimatic operator.
#include<stdio.h>
int main() {
    int a,b,c;  //4,5
    printf ("Enter the two number : ");
    scanf ("%d %d",&a,&b);

    c = a*(a>=b)+b*(b>a);

    printf ("the greatest value : %d",c);

    

}