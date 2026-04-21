#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	puts("Gnomes:");
	for(int i=0; i<n; i++) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		
		if((a>b && b>c) || (a<b && b<c))
			puts("Ordered");
		else
			puts("Unordered");
	}
	
	return 0;
}
