#include <stdio.h>
int main() {
    int n;
    printf ("Enter the year : ");
    scanf ("%d",&n);

    (n%4 == 0)? ((n%100!=0)||(n%400==0))? printf ("year is leap year.") :  printf ("year is not a leap year.") : printf (" ");
    return 0;
}