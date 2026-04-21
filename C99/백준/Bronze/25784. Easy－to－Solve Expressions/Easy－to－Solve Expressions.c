#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a+b==c || a+c==b || b+c==a)
		puts("1");
	else if(b*c==a || a*c==b || a*b==c)
		puts("2");
	else
		puts("3");
		
	return 0;
}
