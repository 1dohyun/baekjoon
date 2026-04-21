#include <stdio.h>

int main() {
	int t, tmp, cnt = 0;
	scanf("%d", &t);
	
	for(int i=0; i<5; i++) {
		scanf("%d", &tmp);
		if(tmp==t)
			cnt++;
	}
	
	printf("%d\n", cnt);
	return 0;
}
