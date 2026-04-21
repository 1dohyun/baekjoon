#include <stdio.h>

int main() {
	int a, b, c, tmp;
	scanf("%d %d %d", &a, &b, &c);
		
	while(a!=0 && b!=0 && c!=0) {
		if(a>b) {
			tmp = a;
			a = b;
			b = tmp;
		}
		
		if(a>c) {
			tmp = a;
			a = c;
			c = tmp;
		}
		
		if(b>c) {
			tmp = b;
			b = c;
			c = tmp;
		}
		
		if(a+b<=c)
			puts("Invalid");
		else if(a==b && b==c && a==c)
			puts("Equilateral");
		else if(a!=b && b!=c && a!=c)
			puts("Scalene");
		else
			puts("Isosceles");
			
		scanf("%d %d %d", &a, &b, &c);
	}
	
	return 0;
}
