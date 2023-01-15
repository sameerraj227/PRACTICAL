#include <stdio.h>
int main() {
	int n;
	scanf ("%d",&n);
	int a =0,b=1,c;
	while (a<=n){
		printf ("%d ",a);
		c=a+b;
		a=b;
		b=c;
		
	}
	
}