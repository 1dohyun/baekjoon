#include <stdio.h>

int main() {
	int tmp, total, sum = 0;
	scanf("%d", &total);
	
	for(int i=0; i<9; i++) {
		scanf("%d", &tmp);
		sum += tmp;
	}
	
	printf("%d\n", total-sum);
	return 0;
}
