#include <stdio.h>

int main() {
	int tmp, low1 = 0, low2 = 0, sum = 0;
	
	for(int i=0; i<4; i++) {
		scanf("%d", &tmp);
		low1 = low1==0 ? tmp : low1;
		low1 = low1<tmp ? low1 : tmp;
		sum += tmp;
	}
	
	for(int i=0; i<2; i++) {
		scanf("%d", &tmp);
		low2 = low2==0 ? tmp : low2;
		low2 = low2<tmp ? low2 : tmp;
		sum += tmp;
	}
	
	printf("%d\n", sum-low1-low2);
	return 0;
}
