#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	int k, x;
	scanf("%d %d", &k, &x);
	
	int l = k-x;
	if(l<a)
		l = a;
	
	int r = k+x;
	if(r>b)
		r = b;
	
	if(l>r)
		puts("IMPOSSIBLE");
	else
		printf("%d\n", r-l+1);
		
	return 0;
}
