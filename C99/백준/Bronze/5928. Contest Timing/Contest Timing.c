#include <stdio.h>

int main() {
	int d, h, m, total = 0;
	scanf("%d %d %d", &d, &h, &m);
	
	if(d==11) {
		if(h<11 || (h==11 && m<11)) {
			puts("-1");
			return 0;
		}
	}
	
	int D = 11, H = 11, M = 11;
	while(D!=d || H!=h || M!=m) {
		if(++M>=60) {
			M = 0;
			H++;
		}
		
		if(H>=24) {
			D++;
			H = 0;
			M = 0;
		}
		
		total++;
	}
	
	printf("%d\n", total);
	return 0;
}
