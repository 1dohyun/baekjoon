#include <stdio.h>

int main() {
    int a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>b) {
    	temp = a;
    	a = b;
    	b = temp;
	}
	
	if(b>c) {
		temp = b;
		b = c;
		c = temp;
	}
	
	if(a>b) {
		temp = a;
		a = b;
		b = temp;
	}
	
	if(a+b>c)
		printf("%d", a+b+c);
	else
		printf("%d", a+b+(a+b-1));
    
    return 0;
}
