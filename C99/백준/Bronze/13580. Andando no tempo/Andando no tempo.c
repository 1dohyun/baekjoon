#include <stdio.h>

int main() {
   	int a, b, c;
   	scanf("%d %d %d", &a, &b, &c);
   	
   	if(a==b || b==c || a==c || a+b==c || a+c==b || b+c==a)
   		puts("S");
   	else
   		puts("N");
   	
	return 0;
}
