#include <stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	
	while(x!=0 || y!=0) {
		if(x+y==13)
			puts("Never speak again.");
		else if(y>x)
			puts("Left beehind.");
		else if(x>y)
			puts("To the convention.");
		else
			puts("Undecided.");
			
		scanf("%d %d", &x, &y);
	}
	
	return 0;
}
