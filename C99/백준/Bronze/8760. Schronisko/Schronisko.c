#include <stdio.h>


int main() {
	int t;
	scanf("%d", &t);
	
	for(int i=0; i<t; i++) {
		int w, k;
		scanf("%d %d", &w, &k);
		
		printf("%d\n", (w*k)/2);
	}
	
	return 0;
}
