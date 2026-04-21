#include <stdio.h>

int main() {
    int n, a, b, good = 1, bad = 1;
    scanf("%d %d %d", &n, &a, &b);

	for(int i=0; i<n; i++) {
		good += a;
		bad += b;
		
		if(good==bad)
			bad -= 1;
		else if(good<bad) {
			int tmp = bad;
			bad = good;
			good = tmp;
		}
	}
	
	printf("%d %d\n", good, bad);
    return 0;
}
