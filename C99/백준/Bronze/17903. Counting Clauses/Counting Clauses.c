#include <stdio.h>

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	
	for(int i=0; i<m; i++) {
		for(int j=0; j<3; j++)
			scanf("%*d");
	}
	
	if(m>=8)
		puts("satisfactory");
	else
		puts("unsatisfactory");
	
	return 0;
}
