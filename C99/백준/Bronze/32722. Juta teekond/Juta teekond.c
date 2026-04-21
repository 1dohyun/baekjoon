#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a==1 || a==3) {
		if(b==6 || b==8) {
			if(c==2 || c==5) {
				puts("JAH");
				return 0;
			}
		}
	}
	
	puts("EI");
    return 0;
}
