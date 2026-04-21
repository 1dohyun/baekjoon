#include <stdio.h>

int main() {
	int wc, hc, ws, hs;
	scanf("%d %d %d %d", &wc, &hc, &ws, &hs);
	
	if(wc>ws+1 && hc>hs+1)
		puts("1");
	else
		puts("0");
	
	return 0;
}
