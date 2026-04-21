#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int c=1, t=1;
	while(n>c) {
		c += 6*t;
		t++;
	}
	
	printf("%d", t);
    return 0;
}
