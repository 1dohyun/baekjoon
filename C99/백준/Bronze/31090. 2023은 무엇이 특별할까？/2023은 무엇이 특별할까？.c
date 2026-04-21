#include <stdio.h>

int main() {
	int t, n;
	scanf("%d", &t);
	
	for(int i=0; i<t; i++) {
		scanf("%d", &n);
        
		if((n+1)%(n%100)==0)
			puts("Good");
		else
			puts("Bye");
	}
	return 0;
}
