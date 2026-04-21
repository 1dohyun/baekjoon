#include <stdio.h>

int main() {
	int n, m, total = 0;
	scanf("%d", &n);
	
	int a[10001];
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	
	scanf("%d", &m);
	for(int i=0; i<m; i++) {
		int b;
		scanf("%d", &b);
		
		total += a[b-1];
	}
	
	printf("%d\n", total);
    return 0;
}
