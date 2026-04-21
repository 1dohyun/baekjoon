#include <stdio.h>

int main() {
	int n, sum = 0;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		int w, h;
		scanf("%d %d", &w, &h);
		
		if(w==136)
			sum += 1000;
		if(w==142)
			sum += 5000;
		if(w==148)
			sum += 10000;
		if(w==154)
			sum += 50000;
	}
	
	printf("%d\n", sum);
	return 0;
}
