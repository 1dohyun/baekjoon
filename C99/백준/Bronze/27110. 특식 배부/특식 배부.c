#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>n)
		a = n;
	
	if(b>n)
		b = n;
	
	if(c>n)
		c = n;
	
	printf("%d\n", a+b+c);
	return 0;
}
