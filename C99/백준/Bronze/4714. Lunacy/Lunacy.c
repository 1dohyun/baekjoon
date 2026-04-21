#include <stdio.h>

int main() {
	float x;
	scanf("%f", &x);
	
	while(x>0) {
		printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n", x, x*0.167);
		scanf("%f", &x);
	}
	
	return 0;
}
