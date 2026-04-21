#include <stdio.h>

int main() {
    int n, m, count = 0;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		scanf("%d", &m);
		
		int is = 1;
		if(m<2) continue;
		
		for(int j=2; j*j<=m; j++) {
			if(m%j==0) {
				is = 0;
				break;
			}
		}
		
		if(is) count++;
	}
	
	printf("%d", count);
    return 0;
}
