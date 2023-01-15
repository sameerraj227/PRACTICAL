#include <stdio.h>
//hcf lcm
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int hcf;
    for (int i = 1; i<b; i++ ){
        if (a%i==0 && b%i==0){
            hcf=i;
            break;
        }
    }
    int lcm = (a*b)/hcf;
    printf ("HCF = %d\n",hcf);
    printf ("LCM = %d\n",lcm);

}