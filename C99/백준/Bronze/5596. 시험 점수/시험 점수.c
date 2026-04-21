#include <stdio.h>

int main() {
	int tmp, sumS = 0, sumT = 0;
	
	for(int i=0; i<4; i++) {
		scanf("%d", &tmp);
		sumS += tmp;
	}
	
	for(int i=0; i<4; i++) {
		scanf("%d", &tmp);
		sumT += tmp;
	}
	
	if(sumS<sumT)
		printf("%d\n", sumT);
	else
		printf("%d\n", sumS);
	
	return 0;
}
