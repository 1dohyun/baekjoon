#include <stdio.h>

int main() {
	int k, w, m, cnt = 0;
	scanf("%d %d %d", &k, &w, &m);
	
	while(k<w) {
		k += m;
		cnt++;
	}
	
	printf("%d\n", cnt);
	return 0;
}
