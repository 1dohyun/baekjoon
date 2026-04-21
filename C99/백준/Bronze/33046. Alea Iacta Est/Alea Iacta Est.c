#include <stdio.h>

int circle(start, total) {
	int plr = (start+total-1)%4;
	return plr==0 ? 4 : plr;
}

int main() {
	int a, b, c, d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	
	int p1 = circle(1, a+b);
	int p2 = circle(p1, c+d);
	
	printf("%d\n", p2);
    return 0;
}
