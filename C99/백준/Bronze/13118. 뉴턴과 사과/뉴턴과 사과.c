#include <stdio.h>

int main() {
	int p[4], x, y, r;
	
	scanf("%d %d %d %d", &p[0], &p[1], &p[2], &p[3]);
	scanf("%d %d %d", &x, &y, &r);
	
	for(int i=0; i<4; i++) {
		if(p[i]==x) {
			printf("%d\n", i+1);
			return 0;
		}
	}
	
	puts("0");
    return 0;
}