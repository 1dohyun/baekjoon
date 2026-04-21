#include <stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	
	for(int i=x; i<=y; i++) {
		if((x-i)%60==0)
			printf("All positions change in year %d\n", i);
	}
	
	return 0;
}
