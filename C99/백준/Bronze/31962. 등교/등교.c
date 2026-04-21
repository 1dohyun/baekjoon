#include <stdio.h>

int main() {
	int n, x, max = -1;
	scanf("%d %d", &n, &x);
	
	for(int i=0; i<n; i++) {
		int s, t;
		scanf("%d %d", &s, &t);
		
		if(s+t<=x)
			max = max<s ? s : max;
	}
	
	printf("%d\n", max);
	return 0;
}
