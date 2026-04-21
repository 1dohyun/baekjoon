#include <stdio.h>

int main() {
	int x, l, r;
	scanf("%d %d %d", &x, &l, &r);
	
	if(x<l)
		printf("%d\n", l);
	else if(x>r)
		printf("%d\n", r);
	else
		printf("%d\n", x);
	
	return 0;
}
