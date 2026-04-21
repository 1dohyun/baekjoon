#include <stdio.h>

int main() {
	int s, m, l;
	scanf("%d %d %d", &s, &m, &l);
	
	int h = 1*s+2*m+3*l;
	
	if(h>=10)
		puts("happy");
	else
		puts("sad");
    
	return 0;
}
