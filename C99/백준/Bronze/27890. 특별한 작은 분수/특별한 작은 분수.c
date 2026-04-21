#include <stdio.h>

int main() {
	int x0, n;
	scanf("%d %d", &x0, &n);
	
	int x = x0;
	for(int i=0; i<n; i++) {
		if(x%2==0)
			x = (x/2)^6;
		else
			x = (x*2)^6;
	}
	
	printf("%d\n", x);
	return 0;
}