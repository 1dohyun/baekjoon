#include <stdio.h>

int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	
	char tracks[n];
	for(int i=0; i<n; i++) {
		scanf(" %c", &tracks[i]);
	}	
	
	char hello;
	scanf(" %c", &hello);
	
	for(int i=0; i<n; i++) {
		if(tracks[i]==hello)
			cnt++;
	}

	printf("%d\n", cnt);
	return 0;
}
