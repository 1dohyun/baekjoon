#include <stdio.h>

int main() {
	int a, b, cnt = 0;
	scanf("%d %d", &a, &b);
	
	while(cnt<b) {
		if(++a>12)
			a = 1;
		cnt++;
	}
	
	printf("%d\n", a);
	return 0;
}
