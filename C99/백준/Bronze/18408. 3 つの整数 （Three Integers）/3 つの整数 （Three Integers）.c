#include <stdio.h>

int main() {
	int g[3], cnt1 = 0, cnt2 = 0;
	scanf("%d %d %d", &g[0], &g[1], &g[2]);
	
	for(int i=0; i<3; i++) {
		if(g[i]==1)
			cnt1++;
		else
			cnt2++;
	}
	
	printf("%d\n", cnt1<cnt2 ? 2 : 1);
	return 0;
}
