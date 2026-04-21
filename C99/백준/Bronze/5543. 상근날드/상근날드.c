#include <stdio.h>

int main() {
	int sang, jung, ha, cola, sprite;
	scanf("%d %d %d %d %d", &sang, &jung, &ha, &cola, &sprite);
	
	int min = sang+cola;
	int t1 = jung+cola;
	int t2 = ha+cola;
	
	int t3 = sang+sprite;
	int t4 = jung+sprite;
	int t5 = ha+sprite;
	
	min = min>t1 ? t1 : min;
	min = min>t2 ? t2 : min;
	min = min>t3 ? t3 : min;

	min = min>t4 ? t4 : min;
	min = min>t5 ? t5 : min;
	
	printf("%d\n", min-50);
	return 0;
}
