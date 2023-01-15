#include<stdio.h>
int main() {
    int n; 
    scanf("%d",&n);
    int a[n];
    int b[n];
    int i;
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf ("before reverse array : ");
    for (i=0; i<n; i++){
        printf ("%d ",a[i]);
    }
    printf ("\nafter reverse array : ");
    for (i=n-1; i>=0; i--){
        printf ("%d ",a[i]);
    }
}