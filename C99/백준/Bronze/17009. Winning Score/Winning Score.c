#include <stdio.h>

int main() {
	int tmp, a = 0, b = 0;
	
	for(int i=3; i>0; i--) {
		scanf("%d", &tmp);
		a += i*tmp;
	}
	
	for(int i=3; i>0; i--) {
		scanf("%d", &tmp);
		b += i*tmp;
	}
	
	if(a>b)
		puts("A");
	else if(a<b)
		puts("B");
	else
		puts("T");
		
	return 0;
}
