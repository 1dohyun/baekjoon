#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		int i, f;
		scanf("%d %d", &i, &f);
		
		if((i<=1 && f<=2) || (i<=2 && f<=1))
			puts("Yes");
		else
			puts("No");
	}
	
	return 0;
}
