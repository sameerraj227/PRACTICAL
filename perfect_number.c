#include<stdio.h>
//perfect number.
int main() {
    int n;
    scanf ("%d",&n);
    int sum = 0;
    for (int i=1; i<n; i++){
        if (n%i == 0){
            sum = sum +i;
        }
    }
    if (sum == n){
        printf("number is perfect number");
    }
    else {
        printf ("number is not perfect number.");
    }

}