#include <stdio.h>
int main() {
    printf ("enter the marks of five subject out of 100 : ");
    int mark1,mark2,mark3,mark4,mark5,total,average,percent;
    scanf ("%d %d %d %d %d",&mark1,&mark2,&mark3,&mark4,&mark5);

    total = mark1 + mark2 + mark3 + mark4 + mark5;
    printf ("Total : %d \n",total);

    average = total/5;
    printf ("Average : %d \n",average);

    percent = (total * 100)/500;
    printf ("percent : %d",percent);
    
    return 0;
}