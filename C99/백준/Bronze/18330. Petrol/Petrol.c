#include <stdio.h>

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	
	int cost;
	if(n<=k+60)
		cost = n*1500;
	else
		cost = (k+60)*1500 + (n-k-60)*3000;
	
	printf("%d\n", cost);
	return 0;
}
