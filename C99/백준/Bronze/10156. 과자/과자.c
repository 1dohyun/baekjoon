#include <stdio.h>

int main() {
	int k, n, m;
	scanf("%d %d %d", &k, &n, &m);
	
	int need = m-k*n;
	printf("%d\n", need>0 ? 0 : -need);
	return 0;
}
