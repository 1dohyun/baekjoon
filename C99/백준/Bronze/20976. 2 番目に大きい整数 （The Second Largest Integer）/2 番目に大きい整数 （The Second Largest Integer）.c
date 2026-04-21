#include <stdio.h>

int main() {
	int max, min, sum = 0;
	
	for(int i=0; i<3; i++) {
		int tmp;
		scanf("%d", &tmp);
		
		if(max<tmp || i==0)
			max = tmp;
		
		if(min>tmp || i==0)
			min = tmp;
		sum += tmp;
	}
	
	printf("%d\n", sum-max-min);
	return 0;
}
