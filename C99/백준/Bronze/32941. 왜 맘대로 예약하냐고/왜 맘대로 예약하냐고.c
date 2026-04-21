#include <stdio.h>

int main() {
	int t, x, n, can = 0;
	scanf("%d %d %d", &t, &x, &n);
	
	for(int i=0; i<n; i++) {
		int k;
		scanf("%d", &k);
		
		for(int j=0; j<k; j++) {
			int tmp;
			scanf("%d", &tmp);
			
			if(tmp==x)
				can++;
		}
	}
	
	printf("%s\n", can>=n ? "YES" : "NO");
	return 0;
}
