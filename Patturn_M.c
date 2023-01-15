#include<stdio.h>
int main() {
    for(int i=1; i<=7; i++){
        for(int j=1; j<=7; j++){
            if (i==1 || i>=5){
                if(j==1 || j==7 ){
                    printf ("* ");
                }
                else {
                    printf ("  ");
                }
            }
            if (i>=2 && i<=4){
                
                if ((i==2 && (j==1 || j==2 || j==7 || j==6)) || (i==3 && (j==1 || j==3 || j==5 || j==7)) || (i==4 && (j==1 || j==4 || j==7)) ){
                    printf ("* ");
                }
                if ((i==2 && (j>=3 && j<=5)) || (i==3 && (j==2 || j==4 || j==6)) || (i==4 && (j==2 || j==3 || j==5 || j==6))){
                    printf ("  ");
                }
            }
        }
        printf ("\n");
    }
}