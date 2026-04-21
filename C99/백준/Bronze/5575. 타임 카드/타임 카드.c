#include <stdio.h>

int main() {
	for(int i=0; i<3; i++) {
		int h, m, s, H, M, S;
		scanf("%d %d %d %d %d %d", &h, &m, &s, &H, &M, &S);
		
		int diff = (H*3600+M*60+S) - (h*3600+m*60+s);
		printf("%d %d %d\n", diff/3600, (diff%3600/60), diff%60);
	}
    
	return 0;
}
