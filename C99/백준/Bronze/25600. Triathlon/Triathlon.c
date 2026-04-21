#include <stdio.h>

int main() {
	int n, max = 0;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		int a, d, g;
		scanf("%d %d %d", &a, &d, &g);
		
		int score;
		if(d+g==a)
			score = 2*a*(d+g);
		else
			score = a*(d+g);
		
		max = max<score ? score : max;
	}
	
	printf("%d\n", max);
    return 0;
}