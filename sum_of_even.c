#include<stdio.h>
int main() {
    int n;
    printf ("Enter the limit : ");
    scanf("%d",&n);
    int a[n];
    int i;
    int sum =0;
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        if(a[i] % 2 ==0){
            sum = sum +a[i];
        }
    }
    printf ("sum of even number : %d",sum);
}