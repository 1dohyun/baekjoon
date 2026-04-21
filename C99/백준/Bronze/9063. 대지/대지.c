#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int xmax = -1e9, ymax = -1e9;
	int xmin = 1e9, ymin = 1e9;
	
	for(int i=0; i<n; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		
		if(x>xmax)
			xmax = x;
			
		if(x<xmin)
			xmin = x;
		
		if(y>ymax)
			ymax = y;
		
		if(y<ymin)
			ymin = y;
	}
	
	printf("%lld\n", (long long)(xmax-xmin)*(ymax-ymin));
	return 0;
}
