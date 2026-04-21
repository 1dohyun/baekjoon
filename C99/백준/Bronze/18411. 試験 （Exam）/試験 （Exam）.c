#include <stdio.h>

int main() {
	int min, sum = 0;
	
	for(int i=0; i<3; i++) {
		int tmp;
		scanf("%d", &tmp);
		
		if(min>tmp || i==0)
			min = tmp;
		sum += tmp;
	}
	
	printf("%d\n", sum-min);
	return 0;
}
