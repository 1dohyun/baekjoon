#include <stdio.h>

int main() {
	int b;
	scanf("%d", &b);
	
	int p = 5*b-400;
	printf("%d\n", p);
	
	if(p>100)
		puts("-1");
	else if(p<100)
		puts("1");
	else
		puts("0");
	
	return 0;
}
