#include <stdio.h>

int main() {
	int r1, r2;
	scanf("%d %d", &r1, &r2);
	
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		int usage;
		scanf("%d", &usage);
		printf("%d", usage);
		
		if(usage<=1000)
			printf(" %d\n", usage*r1);
		else
			printf(" %d\n", (usage-1000)*r2+1000*r1);
	}
	
	return 0;
}
