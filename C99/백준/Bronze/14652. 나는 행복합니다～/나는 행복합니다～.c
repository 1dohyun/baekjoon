#include <stdio.h>

int main() {
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	
	for(int i=0; i<n; i++) {
		int cnt = 0;
		for(int j=m*i; j<m*i+m; j++) {
			cnt++;
			if(j==k) {
				printf("%d %d\n", i, cnt-1);
				return 0;
			}
		}
	}
	
	return 1;
}
