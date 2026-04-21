#include <stdio.h>
#include <math.h>

int main() {
	char a[3], b[3];
	scanf("%s %s", a, b);
	
	int dx = abs((a[0]-'a'+1) - (b[0]-'a'+1));
	int dy = abs((a[1]-'0') - (b[1]-'0'));
	
	printf("%d %d\n", dx<dy ? dx : dy, dx>dy ? dx : dy);
	return 0;
}
