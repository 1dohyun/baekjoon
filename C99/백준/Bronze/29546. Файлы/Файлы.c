#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	char files[1000][101];
	
	for(int i=0; i<n; i++)
		scanf("%s", files[i]);

	int m;
	scanf("%d", &m);
	
	for(int i=0; i<m; i++) {
		int l, r;
		scanf("%d %d", &l, &r);
		
		for(int j=l-1; j<=r-1; j++)
			printf("%s\n", files[j]);
	}
	
	return 0;
}
