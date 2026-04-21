#include <stdio.h>


int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
		puts("1");
	else if(a==b && b==c)
		puts("2");
	else
		puts("0");
	
	return 0;
}
