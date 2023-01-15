#include <stdio.h>
int main() {
    int age;
    printf ("Enter the age");
    scanf ("%d",&age);

    (age >= 18)&& printf ("eligible");
    (age < 18)&& printf ("not eligible");

    return 0;
}