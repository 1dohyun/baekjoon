#include <stdio.h>

int main() {
	int n, min = -1;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		
		if(a<=b) {
			if(min==-1)
				min = b;
			else
				min = min>b ? b : min;	
		}
	}
	
	printf("%d\n", min);
	return 0;
}
