#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++) {
		char first[21], last[21];
		scanf("%s %s", first, last);
		
		printf("Case %d: %s, %s\n", i, last, first);
	}
	
	return 0;
}
