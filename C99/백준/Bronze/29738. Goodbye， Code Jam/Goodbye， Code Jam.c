#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++) {
		int n;
		scanf("%d", &n);
		
		printf("Case #%d: ", i);
		if(n<=25)
			puts("World Finals");
		else if(n<=1000)
			puts("Round 3");
		else if(n<=4500)
			puts("Round 2");
		else
			puts("Round 1");
	}
	
    return 0;
}
