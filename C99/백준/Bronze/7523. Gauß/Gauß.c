#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++) {
		int n, m;
		scanf("%d %d", &n, &m);
		
		printf("Scenario #%d:\n%lld\n", i, (long long)(m-n+1)*(long long)(m+n)/2);
		
		if(i!=t)
			putchar('\n');
	}
	
	return 0;
}
