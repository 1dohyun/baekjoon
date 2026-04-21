#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++) {
		int tmp, max = 0;
		for(int j=0; j<5; j++) {
			scanf("%d", &tmp);
			max = max<tmp ? tmp : max;
		}
			
		printf("Case #%d: %d\n", i, max);
	}
	
	return 0;
}
