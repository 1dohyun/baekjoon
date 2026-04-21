#include <stdio.h>

int main() {
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	
	int o = m>k ? k : m;
	int x = n-m>n-k ? n-k : n-m;
	
	printf("%d\n", x+o);	
	return 0;
}
