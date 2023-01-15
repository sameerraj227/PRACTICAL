#include<stdio.h>
int main() {
    float fer,cel;
    printf ("Enter the temprature in fahrenite");
    scanf ("%f",&fer);
    
    cel = ((fer - 32)*5)/9;

    printf ("temprature in celcius = %f",cel);

    return 0;
}