#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		int c, p;
		scanf("%d %d", &c, &p);
		
		int t = c==1 ? c*p : (c-1)*(p-2)+p;
		
		printf("%d %d\n%d\n", c, p, t);
	}
	
	return 0;
}
