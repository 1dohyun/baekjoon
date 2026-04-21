#include <stdio.h>

int main() {
	int x, m = 0;
	scanf("%d", &x);
	
	for(int i=0; i<x; i++) {
		if(i%2==0)
			m += 3;
		else
			m -= 2;
	}
	
	printf("%d\n", m);
    return 0;
}
