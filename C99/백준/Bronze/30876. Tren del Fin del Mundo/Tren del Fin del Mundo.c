#include <stdio.h>

int main() {
	int n, my, mx;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		
		if(my>y || i==0) {
			my = y;
			mx = x;
		}
	}
	
	printf("%d %d\n", mx, my);
	return 0;
}
