#include <stdio.h>

int main() {
   	int a, b, c;
   	scanf("%d %d %d", &a, &b, &c);
   	
   	if(a==b && b==c)
   		puts("*");
   	
   	if(a!=b && b==c)
   		puts("A");
   	
   	if(a==c && a!=b)
   		puts("B");
   	
   	if(a==b && b!=c)
   		puts("C");
   	
	return 0;
}
