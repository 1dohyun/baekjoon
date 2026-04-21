#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	while(t--) {
		int g, c, e;
		scanf("%d %d %d", &g, &c, &e);
		
		int k;
		if(g==1)
			k = 1;
		else if(g==2)
			k = 3;
		else
			k = 5;
			
		int n = e-c<0 ? 0 : e-c;
		printf("%d\n", n*k);
	}
	return 0;
}
