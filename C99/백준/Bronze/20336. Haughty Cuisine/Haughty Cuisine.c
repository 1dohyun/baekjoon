#include <stdio.h>

int main() {
	int n, total = 0;
	scanf("%d", &n);
	
	int d;
	scanf("%d", &d);
	printf("%d\n", d);
	
	for(int i=0; i<d; i++) {
		char str[21];
		scanf("%s", str);
		printf("%s\n", str);
	}
	
	return 0;
}